use CyclicDist;
use local_lock_free_queue;

/*
  A distributed FIFO queue.

  The queue makes use of a counter to cycle through all locales evenly
  to maintain a proper load-balance across all registered locales, where
  each locale has a per-locale queue. The per-locale queue further ensures a
  FIFO ordering, ensuring that any extra items enqueued after cycling through
  can be dequeued in the same order.

  The position can be obtained and updated in a non-blocking fashion, using the
  available atomic primitives such as Compare-And-Swap, of which is the only global
  synchronization actually needed. Since the only global synchronization also wait-free,
  this ensures scalability. To reduce communication as well, we perform the atomic update
  on the locale owning the queue, which is unavoidable.

  As each per-locale queue is updated on the locale it belongs to, meaning majority
  of the computation can be performed remotely, it ensures that the workload is balanced
  very evenly. In the cases of overlapping operations on a local queue, a non-blocking
  queue is the most optimal, as this would allow enqueues to be fully non-blocking and
  lock-free. While enqueues can be non-blocking, dequeues cannot be as it is possible
  for an enqueue to be scheduled but not finished before another dequeue on that node
  occurs. Due to this, a dequeue would need to spin as the index assigned to it is by
  right theirs and a promise was made by other updaters that an item will be there
  for them eventually.

  Non-Blocking Per-Locale Queue:
    + Allows enqueues to be entirely lock-free
      - Dequeues may need to spin if an enqueue has not completed
    + Possibly the 'optimal' solution
    - Difficult to implement
      - Hazard Pointers for memory reclamation
      - (Very Rare) ABA problem for memory allocation
        - Could require MCAS algorithm to correctly implement
  Two-Locked Per-Locale Queue:
    + Allows for a single enqueue and dequeue concurrent operation
    + Practical for majority of use-cases
    + Very straight-forward to implement
      + Memory reclamation is simple, correctness easy to prove
*/
class Distributed_FIFO {
  type eltType;

  // Our position counter: Upper 32 bits = Head, Lower 32 bits = Tail
  var position : atomic uint(64);

  // Our domain: We use a cyclic distribution
  var domainMapping = {1 .. numLocales};
  var cyclicDomain = domainMapping dmapped Cyclic(startIdx=1);
  var localQueues : [cyclicDomain] queue(eltType);

  proc Distributed_FIFO(type eltType) {
    coforall i in 1..numLocales do {
      var q = new queue(eltType);
      q.initialize();
      localQueues[i] = q;
    }
  }

  proc enqueue(elem : eltType) {
    // The index we are going to be working on...
    var idx : uint(64);

    // Position is queried on the locale that owns the queue
    on position do {
      var pos : uint(64);
      var head, tail : uint(64);

      // Obtain our desired position
      while (true) {
        pos = position.read();
        head = pos & 0xFFFFFFFF00000000;
        tail = pos & 0x00000000FFFFFFFF;

        // Some platforms yield higher performance due to reduced memory contention
        // under concurrent writes to the same cache line. We update the position
        // atomically.
        if (position.compareExchangeWeak(pos, head | (tail + 1))) {
          break;
        }
      }

      // Translates to a single network call to write to the orginal locale's index
      var nLocales : uint(64) = numLocales : uint(64);
      idx = max(1, tail % nLocales);

      /*writeln("Head: ", head, "; Tail: ", tail);*/
    }

    /*writeln(here, ": Assigned index: ", idx);*/

    // Now we add our item
    ref queue = localQueues[idx : int(64)];
    on queue do queue.enqueue(elem);
  }

  proc dequeue() : (bool, eltType) {
    // The index we are going to be working on...
    var idx : uint(64);
    var hasElem : bool = true;

    // Position is queried on the locale that owns the queue
    on position do {
      var pos : uint(64);
      var head, tail : uint(64);
      var localHasElem : bool = true;

      // Obtain our desired position
      while (true) {
        pos = position.read();
        head = pos & 0xFFFFFFFF00000000;
        tail = pos & 0x00000000FFFFFFFF;

        if ((head >> 32) == tail) {
          /*writeln("Queue is empty... Pos: ", pos);*/
          localHasElem = false;
          break;
        }

        // Some platforms yield higher performance due to reduced memory contention
        // under concurrent writes to the same cache line. We update the position
        // atomically.
        if (position.compareExchangeWeak(pos, (head + (1 << 32)) | (tail))) {
          break;
        }
      }

      if localHasElem {
        var nLocales : uint(64) = numLocales : uint(64);
        // Translates to a single network call to write to the orginal locale's index
        idx = max(1, head % nLocales);

        /*writeln("Head: ", head >> 32, "; Tail: ", tail);*/
      }

      hasElem = localHasElem;
    }

    if !hasElem {
      var dummy : eltType;
      return (false, dummy);
    }

    /*writeln(here, ": Assigned index: ", idx);*/

    // Now we get our item from the queue
    // Note that at the index given, its possible that an enqueueing task has not
    // finished yet, but we know there *should* be at least something for us, so we can
    // spin until it has what we want.
    ref queue = localQueues[idx : int(64)];
    var elem : eltType;
    on queue do {
      var retval : (bool, eltType);
      while !retval[1] {
        retval = queue.dequeue();

        if (!retval[1]) {
          writeln(here, ": Spinning... HasElem: ", hasElem, ";");
        }
      }

      // We have our value... this also translates into a network call (PUT)
      elem = retval[2];
    }

    return (true, elem);
  }
}
