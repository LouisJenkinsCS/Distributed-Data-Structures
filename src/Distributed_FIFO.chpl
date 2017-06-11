use CyclicDist;
use ccqueue;

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

  Per-locale buffering, which allows the user to maintain a collection of items to be added later,
  can significantly reduce the overall number of communication calls. For example, given N locales,
  and M elements to be buffered, normally we would have O(M) calls, as each item would need to be
  individually added to each of the per-locale queues, while buffering allows for only O(N) calls
  given that we add at most M/N elements for each locale. As well, buffering and adding in bulk
  bypasses the need for contesting for the counter O(M) times to just O(1) as we make a 'promise'
  to add 'M' elements. Furthermore, we can make quite a few optimizations, such as the per-locale queues
  using bulk operations.

  Per-locale buffering would require a second set of per-locale queues, of which can be enqueued to
  maintain the same FIFO ordering, and with a non-blocking queue it becomes non-blocking and scalable
  among multiple tasks. To empty the buffer, we can repeatedly dequeue until we run out, assigning
  each value to some container, maintaining its insertion order; this ensures the FIFO ordering remains
  and that it allows other concurrent last-minute enqueuers to submit their own without needing to block.
  When it is time to drain the buffer (concurrently) and add to each queue, we make a promise based on the
  number of elements removed, and the elements are added in FIFO order. We also utilize a local 'flush lock'
  to ensure the buffer is only flushed by one local writer, as otherwise it can violate the overall FIFO ordering.
  When elements are added in parallel, it ensures that all PGAS communications begin and become deferred to the other
  locales that own them.

  Per-locale buffering does not come without potential issues. In the case where we 'promise' more than one element,
  it is possible for a task to receive an item later in the queue than it should. For example, if we have
  8 locales, 32 elements promised, we would have 4 elements being added in bulk each. A task that is waiting
  on the the 32nd element can return earlier than a task waiting for the 1st element based on which operation finishes
  first. This non-deterministic behavior may seem alarming at first, but it should be noted that this can only occur
  on overlapping operations. The only way to obtain the 32nd item is to have 32 consumers concurrently, for example.
  This non-deterministic behavior is inherent in any queue that releases their lock before returning
  an item, as it is possible, again, for all other threads to be preempted before 32nd. Again, this non-deterministic
  behavior is inherent in all concurrent data structures, and is used to promote further scalability by allowing
  concurrent operations even for bulk insertion.
*/

class head_response {
  var hasElement : bool;
  var idx : uint(64);
}

class tail_response {
  var idx : uint(64);
}

class queue_request {
  type eltType;
}

class LocaleDescriptor {
  type eltType;
  var nDeferred : uint;
  var buffer : ccqueue(eltType);

  // Ensures we only have one flush at any given time to ensure FIFO ordering
  var flushLock$ : sync bool;

  proc LocaleDescriptor(type eltType) {
    buffer = new ccqueue(eltType);
  }
}

class Distributed_FIFO {
  type eltType;
  var nLocales : int(64) = numLocales;

  // Two monotonically increasing counters used in deciding which locale to choose from
  var head : uint(64);
  var hlock : cclock;
  var tail : uint(64);
  var tlock : cclock;

  // per-locale queues
  var domainMapping = {1 .. nLocales};
  var cyclicDomain = domainMapping dmapped Cyclic(startIdx=domainMapping.low);
  var localQueues : [cyclicDomain] ccqueue(eltType);
  var LocaleDescriptors : [cyclicDomain] LocaleDescriptor(eltType);


  // TODO: Need to allow user to submit their own custom locales, as currently it just
  // uses 1 .. nLocales of the default Locales
  proc Distributed_FIFO(type eltType) {
    // Register our CCLocks
    var head_dispatch = lambda (thiz : object, request : object) {
      var thizRequest = request : queue_request(eltType);
      var thizQueue = thiz : Distributed_FIFO(thizRequest.eltType);
      if thizQueue.head == thizQueue.tail {
        return new head_response(false) : object;
      } else {
        var resp = new head_response(true, thizQueue.head) : object;
        thizQueue.head = thizQueue.head + 1;
        return resp;
      }
    };
    var tail_dispatch = lambda (thiz : object, request : object) {
      var thizRequest = request : queue_request(eltType);
      var thizQueue = thiz : Distributed_FIFO(thizRequest.eltType);
      var resp = new tail_response(thizQueue.tail) : object;
      thizQueue.tail = thizQueue.tail + 1;
      return resp;
    };

    // Register dispatches
    hlock = new cclock(this, head_dispatch);
    hlock.initializer(this, head_dispatch);
    tlock = new cclock(this, tail_dispatch);
    tlock.initializer(this, tail_dispatch);

    coforall i in 0..numLocales - 1 do {
      on Locales[i] {
        var q = new ccqueue(eltType);
        localQueues[localQueues.domain.localSubdomain().first] = q;
        LocaleDescriptors[LocaleDescriptors.domain.localSubdomain().first] = new LocaleDescriptor(eltType);
      }
    }
  }

  proc enqueue(elem : eltType) {
    // Migrate to the owning locale...
    on this {
      var idx : uint(64) = ((tlock.ccsync(new queue_request(eltType) : object) : tail_response).idx % (nLocales : uint(64))) + 1;
      ref queue = localQueues[idx : int(64)];
      on queue do queue.enqueue(elem);
    }
  }

  inline proc ref get_local_descriptor() : LocaleDescriptor(eltType) {
    return LocaleDescriptors[LocaleDescriptors.domain.localSubdomain().first];
  }

  proc enqueue_async(elem : eltType) {
    const ref buffer = get_local_descriptor();
    buffer.buffer.enqueue(elem);
  }

  proc flush() {
    /*const ref buffer = get_local_descriptor();

    // Create one buffer per locale...
    // TODO: Dynamically resize!
    var containerDom : domain(opaque);
    var perLocaleBuffer : [1..nLocales] [containerDom] (int, eltType);
    var nElems : int;

    buffer.flushLock$.writeEF(true);
    // Drain buffer (concurrently)
    var retval : (bool, eltType) = buffer.buffer.dequeue();
    while retval[1] {
      var nIdx = nElems / nLocales + 1;
      var nLocale = nElems % nLocales + 1;

      // Request a new index to assign to...
      var containerIdx = containerDom.create();
      perLocaleBuffer[nLocale](containerIdx) = (nLocale, retval[2]);

      retval = buffer.buffer.dequeue();
      nElems = nElems + 1;
    }

    // Make a promise to enqueue all elements pulled from the local queue.
    // The value fetched is used in determining which queue we begin our
    // distribution. TODO: Figure out a less annoying fix for integral types...
    var startIdx = 0;
    on this do startIdx = ((tail.fetchAdd(nElems : uint(64)) % nLocales : uint(64)) + 1) : int(64);

    // We iterate starting from startIdx and wrap around no more than the number
    // of locales. We do *not* use a coforall here because the normal iterator will
    // *only* spawn a new task if doing so does not exceed some threshold. The fact
    // that these tasks are mainly blocking means that we need to take control back
    // from the abstraction to make this optimizaiton.
    var iterations = min(nLocales, nElems);
    for offset in 0 .. iterations - 1 {
      writeln("Flushing for offset: ", offset);
      // TODO: Simplify logic... it is *really* bad!
      var extra = 0;
      if (startIdx + offset) >= nLocales then extra = 1;
      var localeIdx = ((startIdx + offset) % nLocales) + extra;

      // TODO: Profile this section to determine just *how many* network requests we perform...
      begin {
        // We need reference for locale that owns localQueue[localeIdx], as it is
        // possible that Locales[localeIdx] != localQueue[localeIdx].locale
        const ref localeRef = localQueues[localeIdx].locale;

        // To not outright kill performance due to remote accesses to find the domain
        // that we own, we create a rectangular array so that it can be sent wih as little
        // network requests as possible... Due to the fact that opaque elements are a
        // royal pain and that perLocaleBuffer shares the same 2nd dimension domain, we need
        // to filter out any elements not meant for us. This is *really* inefficient...
        // TODO: PLEASE FIX!
        var elems : [1.. (nElems / nLocales)] eltType;
        var elemIdx = 1;
        for idx in containerDom {
          var retval : (int, eltType) = perLocaleBuffer[offset + 1](idx);
          if retval[1] == (offset + 1) {
            elems[elemIdx] = retval[2];
            elemIdx = elemIdx + 1;
          }
        }
        on localeRef {
          var localElems = elems;
          writeln("Flushing data: ", localElems);
          // Get the local queue
          var queue = localQueues[localQueues.domain.localSubdomain().first];
          // TODO: Implement 'enqueue_bulk' and use it here...
          // Note: We do *not* use a forall as it would kill the FIFO ordering needed.
          for e in localElems do queue.enqueue(e);
        }
      }
    }*/
  }

  proc dequeue() : (bool, eltType) {
    // The index we are going to be working on...
    var idx : uint(64);
    var hasElem : bool = true;

    // Position is queried on the locale that owns the queue
    on tail do {
      var resp = hlock.ccsync(new queue_request(eltType) : object) : tail_response;

      if resp.hasElement {
        idx = (resp.idx % (nLocales : uint(64))) + 1;
      } else {
        hasElem = resp.hasElement;
      }
    }

    if !hasElem {
      return (false, _defaultOf(eltType));
    }

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
          chpl_task_yield();
        }
      }

      // We have our value... this also translates into a network call (PUT)
      elem = retval[2];
    }

    return (true, elem);
  }
}
