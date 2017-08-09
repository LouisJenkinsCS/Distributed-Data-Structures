use Collection;
use BigInteger;
use Time;
use BlockDist;

/*
  A highly parallel segmented multiset. Each node gets its own queue, and in each queue
  its segmented into 'here.maxTaskPar' segments. Segments allow for actual parallelism
  while operating on the queue in that it enables us to manage 'best-case', 'average-case',
  and 'worst-case' scenarios by making multiple passes over each segment. Examples
  of 'best-case' scenarios would be when a segment is unlocked. 'average-case' would be
  when any unlocked/locked segment, and so on.

  This queue employs work stealing, where after multiple failed passes over the
  segments in the queue we attempt to steal work from other queues. Work stealing
  employs a nice helper algorithm where any task performing dequeue operations,
  after also making multiple failed consecutive passes over the queue,
  will enlist their help in terms of finding elements from other nodes.

  TODO/BUG: Global work stealing is non-deterministic in terms of whether or not
  the queue is empty. If we process a node and they steal from another node ahead
  of us, then we skip over it as if the queue is empty when it really isn't. Its
  possible a rather large amount has been stolen as well, which makes this extremely
  problematic. Requires a better global synchronization scheme, definitely need
  the employment for GlobalAtomicObject.

  TODO: Switch from Tuples to raw C pointers and double the size of each successor
  segment (potential performance boost, faster compilation time).
*/

/*
  Below are segment statuses, which is a way to make visible to outsiders the
  current ongoing operation.
*/
// Free to contest
const UNLOCKED : uint = 0;
// These are normal operations which are for more-verbose debugging purposes.
const ENQUEUE : uint = 1;
const DEQUEUE : uint = 2;
// The work stealer is initializing fields for work stealing, and will be ready soon.
const STEALING_INIT : uint = 3;
// The work stealer is currently stealing work, and may require assistance.
const STEALING_WORK : uint = 4;
// The work stealer is currently merging work that is stolen, and no longer requires assistance.
const STEALING_MERGE : uint = 5;

/*
  Below are statuses specific work queue segment slots.
*/
// The work stealer has reinitialized the slot for use.
const INITIALIZED : int = -1;
// A helper task has finished but has not found any work...
const FINISHED_WITH_NO_WORK : int = 0;
// A helper task has finished with work.
const FINISHED_WITH_WORK : int = 1;


// The amount of elements per unroll block; defines the tuple size.
config param ELEMS_PER_BLOCK = 1024;
// The amount we attempt to steal from each segment of other nodes. Helps to
// further ensure a proper load balance by not leaving segments empty by stealing
// on average 1/4 of their work, leaving them with 3/4. As we steal from *all* other
// segments, it is imperative that this stays low to prevent a ping-pong effect on
// work propagating from excessive work stealing. We steal at least one element, but
// no more than ELEMS_PER_BLOCK per segment.
config param WORK_STEALING_RATIO = 0.25;
config param logMPMCQueue = false;

class BagSegmentBlock {
  type eltType;
  var nElems : int;
  var elems : ELEMS_PER_BLOCK * eltType;
  var next : BagSegmentBlock(eltType);

  iter drain(n) {
    var iterations = n;
    while n > 0 {
      if nElems == 0 {
        return;
      }

      var elem = elems[nElems];
      nElems = nElems - 1;

      yield elem;
      iterations = iterations - 1;
    }
  }
}

record BagSegmentSlot {
  type eltType;

  var status : atomic int;
}

record BagSegment {
  type eltType;

  var status : atomic uint;

  var headBlock : BagSegmentBlock(eltType);
  var tailBlock : BagSegmentBlock(eltType);

  /*
    Fields specific to work stealing for this segment (given 'ws' prefix).
    A helper must first 'register' themselves in our status table, which keeps
    track of which cells are currently taken and which are not. In work stealing,
    we attempt to steal ELEMS_PER_BLOCK * here.maxTaskPar elements, but never assign
    more than one task to a given node.
  */

  // Number of potential helpers. We don't want more workers than there are nodes.
  var wsNumSlots = here.maxTaskPar;

  // Used to atomically obtain a slot. A task knows they have a slot if it in
  // [0, wsNumSlots). If it is outside of this range, then all slots are filled
  // or this work stealing session is over before the next is initialized.
  var wsSlotsTaken : atomic int;

  // Slots which keep track of data stolen as well as the current status of the helper task.
  var wsSlots : [{0..#wsNumSlots}] BagSegmentSlot(eltType);

  // Number of elements currently in the list to allow faster determinism of whether
  // or not an operation should attempt this bucket.
  var nElems : atomic uint;

  inline proc isEmpty {
    return nElems.read() == 0;
  }

  inline proc acquireWithStatus(newStatus) {
    return status.compareExchangeStrong(UNLOCKED, newStatus);
  }

  inline proc isUnlocked {
    return status.read() == UNLOCKED;
  }

  inline proc currentStatus {
    return status.read();
  }

  inline proc releaseStatus() {
    status.write(UNLOCKED);
  }

  // TODO: Increase efficiency of bulk taking
  proc takeElements(n) {
    var iterations = n : int;
    var arr : [{0..#n : int}] eltType;
    var arrIdx = 0;
    while iterations > 0 {
      if isEmpty {
        halt("Attempted to take ", n, " elements when insufficient");
      }

      if headBlock.nElems == 0 {
        halt("Iterating over ", n, " elements but Head block is 0 but nElems is ", nElems.read());
      }

      if arrIdx >= arr.size then halt(arrIdx, " > ", arr.size, "; iterations: ", iterations, ", n: ", n);
      arr[arrIdx] = headBlock.elems[headBlock.nElems];
      arrIdx = arrIdx + 1;
      headBlock.nElems = headBlock.nElems - 1;
      nElems.sub(1);

      // Fix list if we consumed last one...
      if headBlock.nElems == 0 {
        var tmp = headBlock;
        headBlock = headBlock.next;
        delete tmp;

        if headBlock == nil then tailBlock = nil;
      }

      iterations = iterations - 1;
    }

    return arr;
  }

  proc takeElement() {
    if isEmpty {
      return (false, _defaultOf(eltType));
    }

    if headBlock.nElems == 0 {
      halt("Iterating over ", 1, " elements but Head block is 0 but nElems is ", nElems.read());
    }

    var elem = headBlock.elems[headBlock.nElems];
    headBlock.nElems = headBlock.nElems - 1;
    nElems.sub(1);

    // Fix list if we consumed last one...
    if headBlock.nElems == 0 {
      var tmp = headBlock;
      headBlock = headBlock.next;
      delete tmp;

      if headBlock == nil then tailBlock = nil;
    }

    return (true, elem);
  }

  proc addElements(elt : eltType) {
    var block = tailBlock;

    // Empty?
    if block == nil then {
      tailBlock = new BagSegmentBlock(eltType);
      headBlock = tailBlock;
      block = tailBlock;
    }

    // Full?
    if block.nElems == ELEMS_PER_BLOCK {
      block.next = new BagSegmentBlock(eltType);
      tailBlock = block.next;
      block = block.next;
    }

    block.nElems = block.nElems + 1;
    block.elems[block.nElems] = elt;

    // We update the count in each iteration to increase the visibility of this
    // operation (as dequeue operations would skip over us during 2nd pass)
    nElems.add(1);
  }

  // TODO: Increase efficiency of bulk adding
  proc addElements(elts) {
    var block = tailBlock;

    // Empty?
    if block == nil then {
      tailBlock = new BagSegmentBlock(eltType);
      headBlock = tailBlock;
      block = tailBlock;
    }

    for elt in elts {
      // Full?
      if block.nElems == ELEMS_PER_BLOCK {
        block.next = new BagSegmentBlock(eltType);
        tailBlock = block.next;
        block = block.next;
      }

      block.nElems = block.nElems + 1;
      block.elems[block.nElems] = elt;

      // We update the count in each iteration to increase the visibility of this
      // operation (as dequeue operations would skip over us during 2nd pass)
      nElems.add(1);
    }
  }
}

class Bag : Collection {
  // A handle to our parent 'distributed' work queue, which is needed for work stealing.
  var parentHandle : DistributedBag(eltType);

  /*
    Helps evenly distribute and balance placement of elements in a best-effort
    round-robin approach. In the case where we have parallel enqueues or dequeues,
    they are less likely overlap with each other. Furthermore, it increases our
    chance to find our 'ideal' segment.
  */
  var startIdxEnq : atomic uint;
  var startIdxDeq : atomic uint;

  /*
    If a task makes 2 complete passes (1 best-case, 1 average-case) and has not
    found enough items, then it may attempt to balance the load distribution.
  */
  var loadBalanceInProgress : atomic bool;

  var maxParallelSegmentSpace = {0 .. #here.maxTaskPar};
  var segments : [maxParallelSegmentSpace] BagSegment(eltType);

  inline proc nextStartIdxEnq {
    return (startIdxEnq.fetchAdd(1) % here.maxTaskPar : uint) : int;
  }

  inline proc nextStartIdxDeq {
    return (startIdxDeq.fetchAdd(1) % here.maxTaskPar : uint) : int;
  }

  proc Bag(type eltType, parentHandle) {
    parentHandle.bag = this;
  }

  proc add(elt : eltType) : bool {
    var startIdx = nextStartIdxEnq;
    var idx = startIdx : int;
    var iterations = 0;

    /*
      Pass 1: Best Case

      Find a segment that is unlocked and attempt to acquire it. As we are adding
      elements, we don't care how many elements there are, just that we find
      some place to add ours.
    */
    while iterations < here.maxTaskPar {
      ref segment = segments[idx];

      // Attempt to acquire...
      if segment.acquireWithStatus(ENQUEUE) {
        segment.addElements(elt);
        segment.releaseStatus();
        return true;
      }

      iterations = iterations + 1;
      idx = (idx + 1) % here.maxTaskPar;
    }

    iterations = 0;
    idx = startIdx : int;

    /*
      Pass 2: Average Case

      Find any segment (locked or unlocked) and make an attempt to acquire it.
      If the segment is actively 'work stealing' then we skip over it to minimize
      the excessive wait-time; given that there can be only *one* work-stealer
      for a node, we know we'll find a better one nearby.
    */
    while true {
      ref segment = segments[idx];

      while true {
        select segment.currentStatus {
          // Quick acquire...
          when UNLOCKED do {
            if segment.acquireWithStatus(ENQUEUE) {
              segment.addElements(elt);
              segment.releaseStatus();
              return true;
            }
          }
          // If someone is stealing, then that means that we'd be waiting for a while
          // anyway, so we may as well attempt to find a node with a shorter wait time.
          when STEALING_INIT do break;
          when STEALING_WORK do break;
          when STEALING_MERGE do break;
        }

        chpl_task_yield();
      }

      idx = (idx + 1) % here.maxTaskPar;
    }

    halt("Almost exited enqueueAcquire before getting a segment...");
  }

  proc remove() : (bool, eltType) {
    var startIdx = nextStartIdxDeq;
    var idx = startIdx;
    var iterations = 0;
    var phase = 1;
    var backoff = 0;

    while true {
      select phase {
        /*
          Pass 1: Best Case

          Find the first bucket that is both unlocked and contains elements. This is
          extremely helpful in the case where we have a good distribution of elements
          in each segment.
        */
        when 1 {
          while iterations < here.maxTaskPar {
            ref segment = segments[idx];

            // Attempt to acquire...
            if !segment.isEmpty && segment.acquireWithStatus(DEQUEUE) {
              var (hasElem, elem) : (bool, eltType) = segment.takeElement();
              segment.releaseStatus();

              if hasElem {
                return (hasElem, elem);
              }
            }

            iterations = iterations + 1;
            idx = (idx + 1) % here.maxTaskPar;
          }

          phase = phase + 1;
        }

        /*
          Pass 2: Average Case

          Find the first bucket containing elements. We don't care if it is locked
          or unlocked this time, just that it contains elements; this handles majority
          of cases where we have elements anywhere in any segment.
        */
        when 2 {
          while iterations < here.maxTaskPar {
            ref segment = segments[idx];

            // Attempt to acquire...
            while !segment.isEmpty {
              if segment.isUnlocked && segment.acquireWithStatus(DEQUEUE) {
                var (hasElem, elem) : (bool, eltType) = segment.takeElement();
                segment.releaseStatus();

                if hasElem {
                  return (hasElem, elem);
                }
              }

              // Backoff
              chpl_task_yield();
            }

            iterations = iterations + 1;
            idx = (idx + 1) % here.maxTaskPar;
          }

          phase = phase + 1;
        }

        /*
          Pass 3: Worst Case

          After two full iterations, we're sure the queue is full at this point, so we
          can attempt to steal work from other nodes. In this pass, we find *any* segment
          and if it is empty, we attempt to become the work-stealer; if someone else is the
          current work stealer we assist them instead and lift an element for ourselves.

          Furthermore, in this phase we loop indefinitely until we are 100% certain it is
          empty or we get an item, so introduce some backoff here.
        */
        when 3 {
          while true {
            ref segment = segments[idx];

            select segment.currentStatus {
              // Quick acquire
              when UNLOCKED {
                if segment.acquireWithStatus(DEQUEUE) {
                  // We're lucky; another element has been added to the current segment,
                  // take it and leave like normal...
                  if !segment.isEmpty {
                    var (hasElem, elem) : (bool, eltType) = segment.takeElement();
                    segment.releaseStatus();
                    return (hasElem, elem);
                  }

                  // Attempt to become the sole work stealer for this node. If we
                  // do not, we spin until they finish. We need to release the lock
                  // on our segment so our segment may be load balanced as well.
                  if loadBalanceInProgress.testAndSet() {
                    segment.releaseStatus();
                    if logMPMCQueue then writeln(here, ": loadBalance is in progres... spinning...");
                    while loadBalanceInProgress.read() do chpl_task_yield();
                    if logMPMCQueue then writeln(here, ": loadBalance is finished, continuing...");

                    // Reset our phase and scan for more elements...
                    phase = 1;
                    break;
                  }

                  if logMPMCQueue then writeln(here, ": work stealing...");

                  // We are the sole work stealer, and so it is our responsibility
                  // to balance the load for our node. We fork-join new worker
                  // tasks that will check horizontally across each node (as in
                  // across each segment with the same index), and vertically across
                  // each segment (each segment in a node). Horizontally, we steal
                  // at most a % of work from other nodes to give to ourselves.
                  // As load balancer, we also are the only one who knows whether
                  // or not all bags are empty.
                  var isEmpty : atomic bool;
                  isEmpty.write(true);
                  segment.releaseStatus();
                  coforall segmentIdx in 0..#here.maxTaskPar {
                    var stolenWork : [{0..#numLocales}] (int, ELEMS_PER_BLOCK * eltType);
                    coforall loc in parentHandle.targetLocales {
                      if loc != here then on loc {
                        // As we jumped to the target node, 'localBag' returns
                        // the target's bag that we are attempting to steal from.
                        var targetBag = parentHandle.localBag;

                        // Only proceed if the target is not load balancing themselves...
                        if !targetBag.loadBalanceInProgress.read() {
                          ref targetSegment = targetBag.segments[segmentIdx];

                          // As we only care that the segment contains data,
                          // we test-and-test-and-set until we gain ownership.
                          while !targetSegment.isEmpty {
                            if targetSegment.currentStatus == UNLOCKED && targetSegment.acquireWithStatus(DEQUEUE) {
                              // Sanity check: ensure segment wasn't emptied since last check
                              if targetSegment.isEmpty {
                                targetSegment.releaseStatus();
                                break;
                              }

                              // We steal at least 1 element, even if its the only element. We steal at most
                              // ELEMS_PER_BLOCK because thats the max we can hold in our tuple. We steal a %
                              // if they have (1, ELEMS_PER_BLOCK) so a sizeable amount is stolen, while leaving them
                              // with enough to get by.
                              var toSteal = max(1, min(ELEMS_PER_BLOCK, targetSegment.nElems.read() * WORK_STEALING_RATIO));
                              var stolen : ELEMS_PER_BLOCK * eltType;
                              var stolenIdx : int;
                              for elt in targetSegment.takeElements(toSteal) {
                                stolenIdx = stolenIdx + 1;
                                stolen[stolenIdx] = elt;
                              }
                              targetSegment.releaseStatus();

                              // Mark as processed and move stolen work...
                              stolenWork[here.id] = (stolenIdx, stolen);

                              // We are done...
                              break;
                            }

                            // Backoff...
                            chpl_task_yield();
                          }
                        }
                      }
                    }

                    // It is our job now to distribute all stolen data to the same
                    // horizontal segment on our node. Acquire lock...
                    ref recvSegment = segments[segmentIdx];
                    while true {
                      if recvSegment.currentStatus == UNLOCKED && recvSegment.acquireWithStatus(ENQUEUE) then break;
                      chpl_task_yield();
                    }

                    // Add stolen elements to segment...
                    for (nStolen, stolen) in stolenWork {
                      for i in 1 .. nStolen do recvSegment.addElements(stolen[i]);

                      // Let parent know that the bag is not empty.
                      isEmpty.write(false);
                    }
                    recvSegment.releaseStatus();
                  }

                  loadBalanceInProgress.write(false);

                  // At this point, if no work has been found, we will return empty...
                  if isEmpty.read() {
                    return (false, _defaultOf(eltType));
                  } else {
                    // Otherwise, we try to get data like everyone else.
                    phase = 1;
                    break;
                  }
                }
              }
            }

            // Backoff to maximum...
            if backoff == 0 then chpl_task_yield();
            else sleep(max(1000, 2 ** backoff), TimeUnits.microseconds);
            backoff = backoff + 1;
          }
        }

        otherwise do halt("Invalid phase #", phase);
      }

      // Reset variables...
      idx = startIdx;
      iterations = 0;
      backoff = 0;
    }

    halt("DistributedBag.remove() DEADCODE...");
  }
}


class DistributedBag : Collection {
  var targetLocDom : domain(1) = LocaleSpace;
  var targetLocales: [targetLocDom] locale = Locales;
  var pid : int;

  // Node-local fields
  var bag : Bag(eltType);

  proc DistributedBag(type eltType, targetLocDom = LocaleSpace, targetLocales = Locales) {
    bag = new Bag(eltType, this);
    bag.parentHandle = this;
    pid = _newPrivatizedClass(this);
  }

  proc DistributedBag(other, privData, type eltType = other.eltType, targetLocales = other.targetLocales, targetLocDom = other.targetLocDom) {
    bag = new Bag(eltType, this);
    bag.parentHandle = this;
  }

  proc dsiPrivatize(privData) {
    return new DistributedBag(this, privData);
  }

  proc dsiGetPrivatizeData() {
    return pid;
  }

  inline proc getPrivatizedThis {
    return chpl_getPrivatizedCopy(this.type, pid);
  }

  inline proc localBag {
    return getPrivatizedThis.bag;
  }

  proc add(elt : eltType) : bool {
    localBag.add(elt);
    return true;
  }

  proc remove() : (bool, eltType) {
    return localBag.remove();
  }
}
