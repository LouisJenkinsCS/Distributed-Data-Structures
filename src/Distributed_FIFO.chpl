use CyclicDist;
use local_lock_free_queue;

/*
  A distributed FIFO queue.

  The queue makes use of a counter to cycle and to properly load-balance across
  all registered locales, where each locale has a per-locale queue. The per-locale
  queue further ensures a FIFO ordering, ensuring that any extra items enqueued
  after cycling through can be dequeued in the same order. This is because a FIFO
  of FIFOs is still a FIFO. For a useful diagram...

  Imagine there are N locales, where we denote a head at position Y as H_Y and a
  tail at position Z as T_Z.

  The Queue is empty:
    H_0, T_0 -- Note that the position just needs to be the same...

    In this case, if the head and tail are equal, then a dequeue will fail if it was read
    as such at the time, but an enqueue would be able to advance the tail.

  Enqueue:
    H_0, T_1

    In this case, the locale at position 0 mod N would end up with an enqueue.

  Dequeue:

    H_1, T_1

    There are two things that can happen: T_0 has not yet finished being enqueued,
    upon which it will spin until it has finished (I.E: by repeatedly attempting to dequeue
    if it is non-blocking), or it has finished, upon which will do a simple dequeue.
    Notice as well that while both Enqueue and Dequeue can be in progress, other tasks
    can advance the head and tail to obtain their next index. Overlapping operations are
    discussed below.

  The position can be obtained and updated in a non-blocking fashion, using the
  available atomic primitives such as Compare-And-Swap, of which is the only global
  synchronization actually needed. Since the only global synchronization is non-blocking,
  lock-free, and wait-free, this ensures scalability. To reduce communication as well,
  we perform atomically updating and obtaining the index on the locale owning the queue.
  The head and tail of the global counter denotes a sort of 'promise' that a task will,
  on enqueue add a new item, and on dequeue remove an existing item. Given that the global counter
  is linearizable, we know that the index obtained from the current counter is correct at the time
  it was retrieved, and enforcing that all tasks uphold such a promise will ensure it always remains
  correct.

  As each per-locale queue is updated on the locale it belongs to, meaning majority
  of the computation can be performed remotely, it ensures that the workload is very
  well balanced. In the cases of overlapping operations on a local queue, a non-blocking
  queue is the most optimal, as this would allow enqueues to be fully non-blocking and
  lock-free, as the counter is proven non-blocking, lock-free, and wait-free.
  While enqueues can be non-blocking (depending on queue implementation), a dequeues
  cannot be as it is possible for an enqueue to 'promise' but not finish before another
  dequeue on that node occurs. Due to this, a dequeue would need to spin as the index
  assigned to it is correct and that *one* of the enqueuers for that index has not completed
  but will eventually. In this regard, dequeue is *mostly* non-blocking.

  In terms of correctness for the per-locale queues, we know that we have a 'promise'
  to perform some task, but beyond that it is not guaranteed that the order that
  tasks that received their indices will perform them in the same order. That is
  if a task t1 obtained its indice before t2, and both t1 and t2 hash to the same index (read: locale),
  it is possible that t2 can complete its operation before t1, therefore it is non-deterministic
  in terms of order of completion. However, because overlapping concurrent operations
  are non-deterministic in nature, and that the FIFO ordering is in fact preserved on some
  level (on the per-locale queue), it is still a valid operation and transparent from the outside.
  Considering that PGAS ensures that multi-locale operations finish before continuing, we can
  verify that indeed an operation will finish in-order on a sequential task. The only way for
  operations to overlap is through overlapping tasks. Compare to a normal synchronized queue,
  and even if it is possible that t1 began its operation before t2, it is still possible for t2
  to obtain the lock before t1 in cases of unexpected delays. Therefore, the non-deterministic
  nature of the per-locale queues are nothing special, and if anything increase overall concurrency.

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
