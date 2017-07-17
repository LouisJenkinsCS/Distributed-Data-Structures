class Queue {
  type eltType;

  // Adds single element...
  proc enqueue(elt : eltType);

  // Adds multiple elements...
  proc enqueue(elt : eltType ... ?nElts);

  // Adds in another queue's elements to our own in FIFO order. This operation is *not*
  // lineraizable.
  proc enqueue(queue : Queue(eltType));

  // Add all elements yielded by some function. If a way to actually capture an iterator
  // exists, perfect! Otherwise, we'd need to improvise with some kind of lambda that
  // returns whatever is being yielded. (I hope this is possible. This would allow us to
  // add *any* element to our queue from another other container that contained an element,
  // *even* ones that were infinite streams... "Why would we find interest in infinite streams
  // for a queue that can run out of space?" - It won't run out for a bounded queue and is a cool
  // way to continuously add elements in an on-demand fashion. Perhaps if it is meant to be used
  // in this fashion it could be it's own function?) Example of a good use-case: "How does my application
  // scale when presented with near infinite (but bounded) amounts of data"? You can easily populate
  // the queue repeatedly with dummy data/work. Just an idea...
  proc enqueue(iterObj)

  // Normal dequeue
  proc dequeue() : (bool, eltType);

  // Dequeue *multiple* elements.
  proc dequeue(nElems) : (int, [] eltType);
}

class QueueFactory {
  /*
    (WIP - In Planning)

    Creates a bounded strict First-In-First-Out Queue. The queue utilizes a distributed
    array and provides wait-free dequeue operations. The queue is dervied from the
    'FFQ: A Fast Single-Producer/Multiple-Consumer Concurrent FIFO Queue' seen here:
    http://se.inf.tu-dresden.de/pubs/papers/ffq2017.pdf

    To allow safe concurrent enqueuers, an extension is required that combines the
    high performance of the CC-Synch algorithm to create a derived variant of H-Synch
    I call the 'FCHLock', or the 'Flat Combining Hierarichal Lock'. An extremely helpful
    slide can be seen here:
    https://opencourses.uoc.gr/courses/pluginfile.php/17173/mod_resource/content/0/HY586-Section3.pdf

    :type eltType: Element type

    :arg maxElems: Maximum number of elements in the queue; halts if value is 0.
    :type maxElems: uint

    :arg targetLocales: Locales to distribute across.
    :type targetLocales: [] locales

    :rtype: DistributedBoundedFIFO(eltType)
  */
  proc makeDistributedBoundedFIFO(
    type eltType,
    maxElems : uint = 0,
    targetLocales : [] locale = Locales
  ) : Queue(eltType);

  // Local variant
  proc makeBoundedFIFO(
    type eltType,
    maxElems : uint = 0
  ) : Queue(eltType);

  /*
    Creates an unbounded strict First-In-First-Out Queue. In this queue, each locale is
    given their own queue, which uses a wait-free round robin algorithm to fairly
    distribute computation, memory, and bandwidth and offers scalable performance.
    The queue also allows the user to use their own custom backbone queues but defaults
    to Michael Scott's two-locked synchronized queue, seen here:
    https://www.research.ibm.com/people/m/michael/podc-1996.pdf

    :type eltType: Element type

    :arg targetLocales: Locales to distribute across.
    :type targetLocales: [] locales

    :rtype: DistributedUnboundedFIFO(eltType)
  */
  proc makeDistributedUnboundedFIFO(
    type eltType,
    targetLocales : [] locale = Locales
  ) : Queue(eltType);

  // Local variant
  proc makeUnboundedFIFO(
    type eltType;
  ) : Queue(eltType);

  /*
    (WIP - Implementing)

  */
  proc makeDistributedWorkQueue(
    type eltType,
    targetLocales : [] locale = Locales
  ) : Queue(eltType);

  // Local variant
  proc makeWorkQueue(
    type eltType
  ) : Queue(eltType);
}
