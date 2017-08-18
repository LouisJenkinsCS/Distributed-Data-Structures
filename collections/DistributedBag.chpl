use Collection;
use BlockDist;

/*
  A highly parallel segmented multiset. Each node gets its own bag, and in each bag
  it is segmented into 'here.maxTaskPar' segments. Segments allow for actual parallelism
  while operating in that it enables us to manage 'best-case', 'average-case',
  and 'worst-case' scenarios by making multiple passes over each segment. In the
  case where there is no oversubscription, the best-case will always be achieved
  (considering any other conditions are also met), while in the case of oversubscription
  or, for example a near empty bag, we fall into the 'average-case', etc. Examples
  of 'best-case' scenarios for a removal would be when a segment is unlocked
  and contains some elements we can drain, and the 'average-case' would be to find
  any segment, unlocked or not, that contains elements we can drain, and so on.

  This data structure also employs its own load balancing algorithm, beginning
  with a best-effort round-robin algorithm such that each task begins searching
  at another segment (with the added benefit of reducing overall contention), in
  particular is useful for locally distributing insertion operations. Next it also
  employs a work-stealing algorithm that horizontally steals a ratio of elements
  across segments. A segment is considered 'horizontal' if it shares the same
  segment index within [0, here.maxTaskPar); those other segments likely are also
  benefitted from local distribution from the round-robin algorithm discussed above.
  We also steal a ratio of elements, say 25%, because it leaves all other segments
  with 75% of their work; the more elements they have, the more we take, but the
  less they have, the less we steal; this also has the added benefit of reducing
  unnecessary work stealing between segments when the bag is nearly emptied. Furthermore,
  stealing horizontally ensures that all segments remain filled and that we still
  achieve parallelism across segments for removal operations. Lastly, we attempt
  to steal a maximum of `N / sizeof(eltType)`, where N is some size in megabytes
  (representing how much data can be sent in one network request), which keeps
  down excessive communication.

  This data structure does not come without flaws; as work stealing is dynamic
  and trigered on demand, work stealing can still be performed in excess, which
  dramatically causes a performance drop; this data structure scales in terms of
  both processors per node, and in terms of raw nodes themselves. As well, due
  to how work stealing is, we perform the best when we have large amounts of data
  to work on, but do not do well with smaller amounts due to excessive work stealing.
  As well, to achieve true parallelism, one must use a privatized instance, specific
  to their node to avoid communication overhead of accessing class fields.
*/

/*
  Below are segment statuses, which is a way to make visible to outsiders the
  current ongoing operation.
*/
private const STATUS_UNLOCKED : uint = 0;
private const STATUS_ADD : uint = 1;
private const STATUS_REMOVE : uint = 2;
private const STATUS_LOOKUP : uint = 3;

/*
  Below are statuses specific to the work stealing algorithm.
*/
private const WS_INITIALIZED : int = -1;
private const WS_FINISHED_WITH_NO_WORK : int = 0;
private const WS_FINISHED_WITH_WORK : int = 1;

/*
  Frozen states... If we are FREEZE_UNFROZEN, we are mutable. If we are FREEZE_FROZEN,
  we are immutable. If we are FREEZE_MARKED, we are in the middle of a state change.
*/
private const FREEZE_UNFROZEN = 0;
private const FREEZE_MARKED = 1;
private const FREEZE_FROZEN = 2;

/*
  The phases for operations.
*/
private const ADD_BEST_CASE = 0;
private const ADD_AVERAGE_CASE = 1;
private const REMOVE_BEST_CASE = 2;
private const REMOVE_AVERAGE_CASE = 3;
private const REMOVE_WORST_CASE = 4;

// The initial amount of elements in an unroll block.
config param INITIAL_BLOCK_SIZE = 1024;
// The amount we attempt to steal from each segment of other nodes. Helps to
// further ensure a proper load balance by not leaving segments empty by stealing
// on average 1/4 of their work, leaving them with 3/4. As we steal from *all* other
// segments, it is imperative that this stays low to prevent a ping-pong effect on
// work propagating from excessive work stealing. We steal at least one element,
// but no more than the amount of data that can be transferred within a single
// bulk transfer, measured in megabytes.
config param WORK_STEALING_RATIO = 0.25;
config param WORK_STEALING_MAX_MEMORY_MB : real = 1.0;
config param BAG_NO_FREEZE = false;

/*
  A segment block is an unrolled linked list node that holds a contiguous buffer
  of memory. Each segment block *should* be a power of two, as we increase the
  size of each subsequent unroll block by twice the size. This is so that stealing
  work is faster in that majority of elements are confined to one area.
*/
class BagSegmentBlock {
  type eltType;

  // Contiguous memory containing all elements
  var elems :  c_ptr(eltType);
  var next : BagSegmentBlock(eltType);

  // The capacity of this block.
  var cap : int;
  // The number of occupied elements in this block.
  var size : int;

  inline proc isEmpty {
    return size == 0;
  }

  inline proc isFull {
    return size == cap;
  }

  inline proc push(elt : eltType) {
    if elems == nil {
      writeln("Cap: ", cap, "; elems: ", elems : string);
      halt("'elems' is nil");
    }

    if isFull {
      halt("SegmentBlock is Full");
    }

    elems[size] = elt;
    size = size + 1;
  }

  inline proc pop() : eltType {
    if elems == nil {
      halt("'elems' is nil");
    }

    if isEmpty {
      halt("SegmentBlock is Empty");
    }

    size = size - 1;
    var elt = elems[size];
    return elt;
  }

  proc BagSegmentBlock(type eltType, capacity) {
    if capacity == 0 {
      halt("Capacity is 0...");
    }

    cap = capacity;
    elems = c_malloc(eltType, capacity);
  }

  proc BagSegmentBlock(type eltType, ptr, capacity) {
    cap = capacity;
    elems = ptr;
    size = cap;
  }

  proc ~BagSegmentBlock() {
    c_free(elems);
  }
}

/*
  A segment is, in and of itself an unrolled linked list. We maintain one per core
  to ensure maximum parallelism.
*/
record BagSegment {
  type eltType;

  // Used as a test-and-test-and-set spinlock.
  var status : atomic uint;

  var headBlock : BagSegmentBlock(eltType);
  var tailBlock : BagSegmentBlock(eltType);

  var nElems : atomic uint;

  inline proc isEmpty {
    return nElems.read() == 0;
  }

  inline proc acquireWithStatus(newStatus) {
    return status.compareExchangeStrong(STATUS_UNLOCKED, newStatus);
  }

  // Set status with a test-and-test-and-set loop...
  inline proc acquire(newStatus) {
    while true {
      if currentStatus == STATUS_UNLOCKED && acquireWithStatus(newStatus) {
        break;
      }

      chpl_task_yield();
    }
  }

  // Set status with a test-and-test-and-set loop, but only while it is not empty...
  inline proc acquireIfNonEmpty(newStatus) {
    while !isEmpty {
      if currentStatus == STATUS_UNLOCKED && acquireWithStatus(newStatus) {
        if isEmpty {
          releaseStatus();
          return false;
        } else {
          return true;
        }
      }

      chpl_task_yield();
    }

    return false;
  }

  inline proc isUnlocked {
    return status.read() == STATUS_UNLOCKED;
  }

  inline proc currentStatus {
    return status.read();
  }

  inline proc releaseStatus() {
    status.write(STATUS_UNLOCKED);
  }

  inline proc transferElements(destPtr, n, locId = here.id) {
    var destOffset = 0;
    var srcOffset = 0;
    while destOffset < n {
      if headBlock == nil || isEmpty {
        halt(here, ": Attempted transfer ", n, " elements to ", locId, " but failed... destOffset=", destOffset);
      }

      var len = headBlock.size;
      var need = n - destOffset;
      // If the amount in this block is greater than what is left to transfer, we
      // cannot begin transferring at the beginning, so we set our offset from the end.
      if len > need {
        srcOffset = len - need;
        headBlock.size = srcOffset;
        __primitive("chpl_comm_array_put", headBlock.elems[srcOffset], locId, destPtr[destOffset], need);
        destOffset = destOffset + need;
      } else {
        srcOffset = 0;
        headBlock.size = 0;
        __primitive("chpl_comm_array_put", headBlock.elems[srcOffset], locId, destPtr[destOffset], len);
        destOffset = destOffset + len;
      }

      // Fix list if we consumed last one...
      if headBlock.isEmpty {
        var tmp = headBlock;
        headBlock = headBlock.next;
        delete tmp;

        if headBlock == nil then tailBlock = nil;
      }
    }

    nElems.sub(n : uint);
  }

  inline proc addElementsPtr(ptr, n) {
    var offset = 0;
    while offset < n {
      var block = tailBlock;
      // Empty? Create a new one of initial size
      if block == nil then {
        tailBlock = new BagSegmentBlock(eltType, INITIAL_BLOCK_SIZE);
        headBlock = tailBlock;
        block = tailBlock;
      }

      // Full? Create a new one double the previous size
      if block.isFull {
        block.next = new BagSegmentBlock(eltType, block.cap * 2);
        tailBlock = block.next;
        block = block.next;
      }

      var nLeft = n - offset;
      var nSpace = block.cap - block.size;
      var nFill = min(nLeft, nSpace);
      __primitive("chpl_comm_array_put", ptr[offset], here.id, block.elems[block.size], nFill);
      block.size = block.size + nFill;
      offset = offset + nFill;
    }

    nElems.add(n : uint);
  }

  inline proc takeElements(n) {
    var iterations = n : int;
    var arr : [{0..#n : int}] eltType;
    var arrIdx = 0;

    for 1 .. n : int{
      if isEmpty {
        halt("Attempted to take ", n, " elements when insufficient");
      }

      if headBlock.isEmpty {
        halt("Iterating over ", n, " elements with headBlock empty but nElems is ", nElems.read());
      }

      arr[arrIdx] = headBlock.pop();
      arrIdx = arrIdx + 1;
      nElems.sub(1);

      // Fix list if we consumed last one...
      if headBlock.isEmpty {
        var tmp = headBlock;
        headBlock = headBlock.next;
        delete tmp;

        if headBlock == nil then tailBlock = nil;
      }
    }

    return arr;
  }

  inline proc takeElement() {
    if isEmpty {
      return (false, _defaultOf(eltType));
    }

    if headBlock.isEmpty {
      halt("Iterating over 1 element with headBlock empty but nElems is ", nElems.read());
    }

    var elem = headBlock.pop();
    nElems.sub(1);

    // Fix list if we consumed last one...
    if headBlock.isEmpty {
      var tmp = headBlock;
      headBlock = headBlock.next;
      delete tmp;

      if headBlock == nil then tailBlock = nil;
    }

    return (true, elem);
  }

  inline proc addElements(elt : eltType) {
    var block = tailBlock;

    // Empty? Create a new one of initial size
    if block == nil then {
      tailBlock = new BagSegmentBlock(eltType, INITIAL_BLOCK_SIZE);
      headBlock = tailBlock;
      block = tailBlock;
    }

    // Full? Create a new one double the previous size
    if block.isFull {
      block.next = new BagSegmentBlock(eltType, block.cap * 2);
      tailBlock = block.next;
      block = block.next;
    }

    block.push(elt);
    nElems.add(1);
  }

  inline proc addElements(elts) {
    for elt in elts do addElements(elt);
  }
}

/*
  We maintain a multiset 'bag' per node. Each bag keeps a handle to it's parent,
  which is required for work stealing.
*/
class Bag {
  type eltType;

  // A handle to our parent 'distributed' bag, which is needed for work stealing.
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
    this.parentHandle = parentHandle;
  }

  proc add(elt : eltType) : bool {
    var startIdx = nextStartIdxEnq : int;
    var phase = ADD_BEST_CASE;

    while true {
      select phase {
        /*
          Pass 1: Best Case

          Find a segment that is unlocked and attempt to acquire it. As we are adding
          elements, we don't care how many elements there are, just that we find
          some place to add ours.
        */
        when ADD_BEST_CASE {
          for offset in 0 .. #here.maxTaskPar {
            ref segment = segments[(startIdx + offset) % here.maxTaskPar];

            // Attempt to acquire...
            if segment.acquireWithStatus(STATUS_ADD) {
              segment.addElements(elt);
              segment.releaseStatus();
              return true;
            }
          }

          phase = ADD_AVERAGE_CASE;
        }
        /*
          Pass 2: Average Case

          Find any segment (locked or unlocked) and make an attempt to acquire it.
        */
        when ADD_AVERAGE_CASE {
          ref segment = segments[startIdx];

          while true {
            select segment.currentStatus {
              // Quick acquire...
              when STATUS_UNLOCKED do {
                if segment.acquireWithStatus(STATUS_ADD) {
                  segment.addElements(elt);
                  segment.releaseStatus();
                  return true;
                }
              }
            }
            chpl_task_yield();
          }
        }
      }
    }

    halt("DEADCODE");
  }

  proc remove() : (bool, eltType) {
    var startIdx = nextStartIdxDeq;
    var idx = startIdx;
    var iterations = 0;
    var phase = REMOVE_BEST_CASE;
    var backoff = 0;

    while true {
      select phase {
        /*
          Pass 1: Best Case

          Find the first bucket that is both unlocked and contains elements. This is
          extremely helpful in the case where we have a good distribution of elements
          in each segment.
        */
        when REMOVE_BEST_CASE {
          while iterations < here.maxTaskPar {
            ref segment = segments[idx];

            // Attempt to acquire...
            if !segment.isEmpty && segment.acquireWithStatus(STATUS_REMOVE) {
              var (hasElem, elem) : (bool, eltType) = segment.takeElement();
              segment.releaseStatus();

              if hasElem {
                return (hasElem, elem);
              }
            }

            iterations = iterations + 1;
            idx = (idx + 1) % here.maxTaskPar;
          }

          phase = REMOVE_AVERAGE_CASE;
        }

        /*
          Pass 2: Average Case

          Find the first bucket containing elements. We don't care if it is locked
          or unlocked this time, just that it contains elements; this handles majority
          of cases where we have elements anywhere in any segment.
        */
        when REMOVE_AVERAGE_CASE {
          while iterations < here.maxTaskPar {
            ref segment = segments[idx];

            // Attempt to acquire...
            while !segment.isEmpty {
              if segment.isUnlocked && segment.acquireWithStatus(STATUS_REMOVE) {
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

          phase = REMOVE_WORST_CASE;
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
        when REMOVE_WORST_CASE {
          while true {
            ref segment = segments[idx];

            select segment.currentStatus {
              // Quick acquire
              when STATUS_UNLOCKED {
                if segment.acquireWithStatus(STATUS_REMOVE) {
                  // We're lucky; another element has been added to the current segment,
                  // take it and leave like normal...
                  if !segment.isEmpty {
                    var (hasElem, elem) : (bool, eltType) = segment.takeElement();
                    segment.releaseStatus();
                    return (hasElem, elem);
                  }

                  if parentHandle.targetLocales.size == 1 {
                    segment.releaseStatus();
                    return (false, _defaultOf(eltType));
                  }

                  // Attempt to become the sole work stealer for this node. If we
                  // do not, we spin until they finish. We need to release the lock
                  // on our segment so our segment may be load balanced as well.
                  if loadBalanceInProgress.testAndSet() {
                    segment.releaseStatus();

                    loadBalanceInProgress.waitFor(false);
                    // Reset our phase and scan for more elements...
                    phase = REMOVE_BEST_CASE;
                    break;
                  }

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
                    var stolenWork : [{0..#numLocales}] (int, c_ptr(eltType));
                    coforall loc in parentHandle.targetLocales {
                      if loc != here then on loc {
                        // As we jumped to the target node, 'localBag' returns
                        // the target's bag that we are attempting to steal from.
                        var targetBag = parentHandle.bag;

                        // Only proceed if the target is not load balancing themselves...
                        if !targetBag.loadBalanceInProgress.read() {
                          ref targetSegment = targetBag.segments[segmentIdx];

                          // As we only care that the segment contains data,
                          // we test-and-test-and-set until we gain ownership.
                          while !targetSegment.isEmpty {
                            var backoff = 0;
                            if targetSegment.currentStatus == STATUS_UNLOCKED && targetSegment.acquireWithStatus(STATUS_REMOVE) {
                              // Sanity check: ensure segment wasn't emptied since last check
                              if targetSegment.isEmpty {
                                targetSegment.releaseStatus();
                                break;
                              }

                              extern proc sizeof(type x): size_t;
                              // We steal at most 1MB worth of data. If the user has less than that, we steal a %, at least 1.
                              const mb = WORK_STEALING_MAX_MEMORY_MB * 1024 * 1024;
                              var toSteal = max(1, min(mb / sizeof(eltType), targetSegment.nElems.read() * WORK_STEALING_RATIO)) : int;

                              // Allocate storage...
                              on stolenWork do stolenWork[loc.id] = (toSteal, c_malloc(eltType, toSteal));
                              var destPtr = stolenWork[here.id][2];
                              targetSegment.transferElements(destPtr, toSteal, stolenWork.locale.id);
                              targetSegment.releaseStatus();

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
                      if recvSegment.currentStatus == STATUS_UNLOCKED && recvSegment.acquireWithStatus(STATUS_ADD) then break;
                      chpl_task_yield();
                    }

                    // Add stolen elements to segment...
                    for (nStolen, stolenPtr) in stolenWork {
                      if nStolen == 0 then continue;
                      recvSegment.addElementsPtr(stolenPtr, nStolen);
                      c_free(stolenPtr);

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
                    phase = REMOVE_BEST_CASE;
                    break;
                  }
                }
              }
            }

            // Backoff to maximum...
            chpl_task_yield();
          }
        }

        otherwise do halt("Invalid phase #", phase);
      }

      // Reset variables...
      idx = startIdx;
      iterations = 0;
      backoff = 0;
    }

    halt("DEADCODE");
  }
}


class DistributedBag : Collection {
  var targetLocDom : domain(1);
  var targetLocales : [targetLocDom] locale;
  var pid : int = -1;

  // Node-local fields
  var bag : Bag(eltType);
  var concurrentTasks : atomic int;
  var frozenState : atomic int;

  proc DistributedBag(type eltType, targetLocales : [?targetLocDom] locale = Locales) {
    bag = new Bag(eltType, this);
    this.targetLocDom = targetLocDom;
    this.targetLocales = targetLocales;
    pid = _newPrivatizedClass(this);
  }

  proc DistributedBag(other, pid, type eltType = other.eltType) {
    bag = new Bag(eltType, this);
    this.targetLocDom = other.targetLocDom;
    this.targetLocales = other.targetLocales;
    this.pid = pid;
  }

  proc dsiPrivatize(pid) {
    return new DistributedBag(this, pid);
  }

  proc dsiGetPrivatizeData() {
    return pid;
  }

  inline proc getPrivatizedThis {
    if this.locale == here {
      return this;
    }

    return chpl_getPrivatizedCopy(this.type, pid);
  }

  /*
    Obtains a privatized version of this instance. The privatized version is a
    cloned instance that is allocated on this node, which is useful for eliding
    communications generated from accessing instance fields. Using another node's
    instance will significantly penalize performance by bounding overall throughput
    on the communication between the two nodes.
  */
  proc getPrivatizedInstance() {
    return getPrivatizedThis;
  }

  /*
    Insert an element to this node's bag. The ordering is not guaranteed to be
    preserved. If this instance is privatized, it is an entirely local operation.
  */
  proc add(elt : eltType) : bool {
    var localThis = getPrivatizedThis;
    if BAG_NO_FREEZE then return localThis.bag.add(elt);

    local {
      localThis.concurrentTasks.add(1);

      // Check if the queue is now 'immutable'.
      if localThis.frozenState.read() > FREEZE_UNFROZEN {
        localThis.concurrentTasks.sub(1);
        return false;
      }
    }

    var result = localThis.bag.add(elt);
    local { localThis.concurrentTasks.sub(1); }
    return result;
  }

  /*
    Remove an element from this node's bag. The order in which elements are removed
    are not guaranteed to be the same order it has been inserted. If this node's
    bag is empty, it will attempt to steal elements from bags of other nodes.
  */
  proc remove() : (bool, eltType) {
    var localThis = getPrivatizedThis;
    if BAG_NO_FREEZE then return localThis.bag.remove();

    local {
      localThis.concurrentTasks.add(1);

      // Check if the queue is now 'immutable'.
      if localThis.frozenState.read() > FREEZE_UNFROZEN {
        localThis.concurrentTasks.sub(1);
        return (false, _defaultOf(eltType));
      }
    }

    var (elem, hasElem) = localThis.bag.remove();
    local { localThis.concurrentTasks.sub(1); }
    return (elem, hasElem);
  }

  /*
    Obtain the number of elements held in all bags across all nodes. This method
    is best-effort if the bags are unfrozen, and can be non-deterministic for
    concurrent updates across nodes, and may miss elements or even count
    duplicates resulting from any concurrent insertion or removal operations.
  */
  proc size() : int {
    var sz : atomic int;
    forall loc in targetLocales do on loc {
      var instance = getPrivatizedThis;
      forall segmentIdx in 0..#here.maxTaskPar {
        sz.add(instance.bag.segments[segmentIdx].nElems.read() : int);
      }
    }

    return sz.read();
  }

  /*
    Performs a lookup to determine if the requested element exists in this bag.
    This method is best-effort if the bags are unfrozen, and can be
    non-deterministic for concurrent updates across nodes, and may miss elements
    resulting from any concurrent insertion or removal operations.
  */
  proc contains(elt : eltType) : bool {
    var foundElt : atomic bool;
    forall elem in getPrivatizedThis {
      if elem == elt {
        foundElt.write(true);
      }
    }
    return foundElt.read();
  }

  /*
    Clears all elements from all bags across nodes. It is equivalent to a sequence
    of `remove` operations.
  */
  proc clear() {
    while remove()[1] do ;
  }

  /*
    If all bags are current empty. See `size` for notes on non-deterministic
    behavior.
  */
  proc isEmpty() : bool {
    return size() == 0;
  }

  /*
    Freeze our state, becoming immutable; we wait for any ongoing concurrent
    operations to allow them to finish.
  */
  proc freeze() {
    if BAG_NO_FREEZE then return false;

    // Check if already frozen
    if frozenState.read() == FREEZE_FROZEN {
      return true;
    }

    // Mark as transient state...
    coforall loc in targetLocales do on loc {
      var localThis = getPrivatizedThis;
      localThis.frozenState.write(FREEZE_MARKED);
      localThis.concurrentTasks.waitFor(0);
    }

    // Mark as frozen...
    coforall loc in targetLocales do on loc {
      var localThis = getPrivatizedThis;
      localThis.frozenState.write(FREEZE_FROZEN);
    }

    return true;
  }

  /*
    Unfreezes our state, allowing mutating operations; we wait on any ongoing
    concurrent operations to allow them to finish.
  */
  proc unfreeze() : bool {
    if BAG_NO_FREEZE then return false;
    // Check if already unfrozen
    if frozenState.read() == FREEZE_UNFROZEN {
      return true;
    }

    // Mark as transient state...
    coforall loc in targetLocales do on loc {
      var localThis = getPrivatizedThis;
      localThis.frozenState.write(FREEZE_MARKED);
      localThis.concurrentTasks.waitFor(0);
    }

    // Mark as unfrozen...
    coforall loc in targetLocales do on loc {
      var localThis = getPrivatizedThis;
      localThis.frozenState.write(FREEZE_UNFROZEN);
    }

    return true;
  }

  proc canFreeze() : bool {
    return !BAG_NO_FREEZE;
  }

  /*
    If we are currently frozen. If we are in the middle of a state transition, we
    wait until it has completed.
  */
  proc isFrozen() : bool {
    if BAG_NO_FREEZE then return false;

    var state = frozenState.read();

    // Current transitioning state, wait it out...
    while state == FREEZE_MARKED {
      chpl_task_yield();
      state = frozenState.read();
    }

    return state == FREEZE_FROZEN;
  }

  /*
    Iterate over each bag in each node. If the bag is frozen, we elide the need
    to acquire any locks and iterate directly over the bag. If the bag is not
    frozen, we must acquire not only the needed locks, but also take a snapshot
    approach, increasing memory consumption.
  */
  iter these() : eltType {
    // Only allowed while frozen due to issue where breaking from a serial iterator
    // does not cleanup resources, leaving the bag in an undefined state.
    var frozen = isFrozen();

    for loc in targetLocales {
      for segmentIdx in 0..#here.maxTaskPar {

        // If the data structure is frozen, we may elide the need to acquire any locks,
        // and we can iterate directly over the data.
        if frozen {
          var instance : DistributedBag(int);
          on loc do instance = getPrivatizedThis;
          ref segment = instance.bag.segments[segmentIdx];
          var block = segment.headBlock;

          while block != nil {
            for i in 0 .. #block.size {
              var elt : eltType;
              on loc do elt = block.elems[i];
              yield elt;
            }
            block = block.next;
          }
        }
        // If the data structure is not frozen, then we must acquire the lock and
        // produce a snapshot (to reduce the time we hold the lock)
        else {
          // The size of the snapshot is only known once we have the lock.
          // TODO/BUG: c_ptr does not seem to work here and causes a segmentation fault at runtime.
          var dom : domain(1) = {0..-1};
          var buffer : [dom] eltType;

          on loc {
            ref segment = getPrivatizedThis.bag.segments[segmentIdx];

            if segment.acquireIfNonEmpty(STATUS_LOOKUP) {
              var block = segment.headBlock;
              while block != nil {
                for i in 0 .. #block.size {
                    buffer.push_back(block.elems[i]);
                }
                block = block.next;
              }
              segment.releaseStatus();

            }
          }

          // Process this chunk if we have one...
          for elem in buffer {
            yield elem;
          }
        }
      }
    }
  }

  iter these(param tag : iterKind) where tag == iterKind.leader {
    var frozen = isFrozen();
    coforall loc in targetLocales do on loc {
      var instance = getPrivatizedThis;
      coforall segmentIdx in 0 .. #here.maxTaskPar {
        ref segment = instance.bag.segments[segmentIdx];

        // If the data structure is frozen, we elide the need to acquire any locks,
        // and we may iterate directly over the data as well.
        if frozen {
          var block = segment.headBlock;

          while block != nil {
            yield (block.size, block.elems);
            block = block.next;
          }
        } else if segment.acquireIfNonEmpty(STATUS_LOOKUP) {
          // Create a snapshot...
          var block = segment.headBlock;
          var bufferSz = segment.nElems.read() : int;
          var buffer = c_malloc(eltType, bufferSz);
          var bufferOffset = 0;

          while block != nil {
            if bufferOffset + block.size > bufferSz {
              halt("Snapshot attempt with bufferSz(", bufferSz, ") with offset bufferOffset(", bufferOffset + block.size, ")");
            }
            __primitive("chpl_comm_array_put", block.elems[0], here.id, buffer[bufferOffset], block.size);
            bufferOffset += block.size;
            block = block.next;
          }

          // Yield this chunk to be process...
          segment.releaseStatus();
          yield (bufferSz, buffer);
          c_free(buffer);
        }
      }
    }
  }

  iter these(param tag : iterKind, followThis) where tag == iterKind.follower {
    var (bufferSz, buffer) = followThis;
    for i in 0 .. #bufferSz {
      yield buffer[i];
    }
  }
}
