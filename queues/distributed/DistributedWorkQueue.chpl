use Queue;
use Random;
use Time;
use BlockDist;
use BigInteger;
use LocalAtomicObject;

/*
  A highly parallel segmented queue. Each node gets its own queue, and in each queue
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
config param logMPMCQueue = false;

class WorkQueueSegmentBlock {
  type eltType;
  var nElems : int;
  var elems : ELEMS_PER_BLOCK * eltType;
  var next : WorkQueueSegmentBlock(eltType);
}

record WorkQueueSegmentSlot {
  type eltType;

  var status : atomic int;
  var block : WorkQueueSegmentBlock(eltType);
}

record WorkQueueSegment {
  type eltType;

  var status : atomic uint;

  var headBlock : WorkQueueSegmentBlock(eltType);
  var tailBlock : WorkQueueSegmentBlock(eltType);

  /*
    Fields specific to work stealing for this segment (given 'ws' prefix).
    A helper must first 'register' themselves in our status table, which keeps
    track of which cells are currently taken and which are not. In work stealing,
    we attempt to steal MAX_ELEMS * here.maxTaskPar elements, but never assign
    more than one task to a given node.
  */

  // Number of potential helpers. We don't want more workers than there are nodes.
  const wsNumSlots = min(numLocales - 1, here.maxTaskPar);

  // A randomly chosen offset we begin stealing at. Needed to prevent starvation
  // of nodes inherent in choosing some arbitrary fixed startpoint.
  var wsStartOffset : int;

  // Used to atomically obtain a slot. A task knows they have a slot if it in
  // [0, wsNumSlots). If it is outside of this range, then all slots are filled
  // or this work stealing session is over before the next is initialized.
  var wsSlotsTaken : atomic int;

  // Slots which keep track of data stolen as well as the current status of the helper task.
  var wsSlots : [{0..#wsNumSlots}] WorkQueueSegmentSlot(eltType);

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
  iter proc takeElements(nElems) {
    while true {
      if isEmpty {
        return;
      }

      var elem = headBlock.elems[headBlock.nElems];
      headBlock.nElems = headBlock.nElems - 1;
      nElems.sub(1);

      // Fix list if we consumed last one...
      if headBlock.nElems == 0 {
        var block = headBlock;
        headBlock = headBlock.next;
        delete block;
      }

      yield elem;
    }
  }

  // TODO: Increase efficiency of bulk adding
  proc addElements(elts) {
    var block = tailBlock;

    // Empty?
    if block == nil then {
      tailBlock = new WorkQueueSegmentBlock(eltType);
      headBlock = tailBlock;
      block = tailBlock;
    }

    for elt in elts {
      // Full?
      if block.nElems == ELEMS_PER_BLOCK {
        block.next = new WorkQueueSegmentBlock(eltType);
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

class WorkQueue : Queue {
  /*
    Helps evenly distribute and balance placement of elements in a best-effort
    round-robin approach. In the case where we have parallel enqueues or dequeues,
    they are less likely overlap with each other. Furthermore, it increases our
    chance to find our 'ideal' segment.
  */
  var startIdxEnq : atomic uint;
  var startIdxDeq : atomic uint;

  /*
    We only allow one segment to be nominated as the 'work stealer' for our queue.
    This reduces the complexity of having to manage multiple work stealing segments
    while also providing more concurrency through work stealing.
  */
  var workStealer : atomic int;

  var maxParallelSegmentSpace = {0 .. #here.maxTaskPar};
  var segments : [maxParallelSegmentSpace] WorkQueueSegment(eltType);

  const maxIterationsPerPhase = here.maxTaskPar;

  inline nextStartIdxEnq {
    return (startIdxEnq.fetchAdd(1) % here.maxTaskPar : uint) : int;
  }

  inline nextStartIdxDeq {
    return (startIdxDeq.fetchAdd(1) % here.maxTaskPar : uint) : int;
  }

  proc WorkQueue(type eltType) {
    workStealer.write(-1);
  }

  /*
    Enqueue...
  */

  proc enqueue(elt : eltType) {
    var startIdx = nextStartIdxEnq;
    var idx = startIdx : int;
    var iterations = 0;

    /*
      Pass 1: Best Case

      Find a segment that is unlocked and attempt to acquire it. As we are adding
      elements, we don't care how many elements there are, just that we find
      some place to add ours.
    */
    while iterations < maxIterationsPerPhase {
      ref segment = segments[idx];

      // Attempt to acquire...
      if segment.acquireWithStatus(ENQUEUE) {
        segment.addElements(elt);
        segment.releaseStatus();
        return;
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
              return;
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

  /*
    Dequeue...
  */


  proc dequeue() : (bool, eltType) {
    var startIdx = nextStartIdxDeq;
    var idx = startIdx;
    var iterations = 0;

    /*
      Pass 1: Best Case

      Find the first bucket that is both unlocked and contains elements. This is
      extremely helpful in the case where we have a good distribution of elements
      in each segment.
    */
    while iterations < maxIterationsPerPhase {
      ref segment = segments[idx];

      // Attempt to acquire...
      if !segment.isEmpty && segment.acquireWithStatus(DEQUEUE) {
        var (hasElem, elem) : (bool, eltType);
        for elt in segment.takeElements(1) do (hasElem, elem) = (true, elt);
        segment.releaseStatus();

        if hasElem {
          return (hasElem, elem);
        }
      }

      iterations = iterations + 1;
      idx = (idx + 1) % here.maxTaskPar;
    }

    idx = startIdx;
    iterations = 0;

    /*
      Pass 2: Average Case

      Find the first bucket containing elements. We don't care if it is locked
      or unlocked this time, just that it contains elements; this handles majority
      of cases where we have elements anywhere in any segment.
    */
    while iterations < maxIterations {
      ref segment = segments[idx];

      // Attempt to acquire...
      while !segment.isEmpty {
        if segment.isUnlocked && segment.acquireWithStatus(DEQUEUE) {
          var (hasElem, elem) : (bool, eltType);
          for elt in segment.takeElements(1) do (hasElem, elem) = (true, elt);
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

    idx = startIdx;

    /*
      Pass 3: Worst Case

      After two full iterations, we're sure the queue is full at this point, so we
      can attempt to steal work from other nodes. In this pass, we find *any* segment
      and if it is empty, we attempt to become the work-stealer; if someone else is the
      current work stealer we assist them instead and lift an element for ourselves.

      Furthermore, in this phase we loop indefinitely until we are 100% certain it is
      empty or we get an item, so introduce some backoff here.
    */
    var backoff = 0;
    while true {
      ref segment = segments[idx];

      select segment.currentStatus {
        // Quick acquire
        when UNLOCKED {
          backoff = 0;
          if segment.acquireWithStatus(DEQUEUE) {
            // Steal if empty... because we help if we are not the one set, we only
            // know whether the queue is empty if we were the work stealer.
            if seg.isEmpty {
              var (_idx, hasElem, elem) = stealWork(idx);

              // If we have lifted an element, we've retrieved an item.
              if hasElem {
                return (hasElem, elem);
              }

              // If the index returned is equivalent to ours, then we were the 'work stealer'
              // for our queue, and since only we personally know how many elements there are
              // (as we were in charge of merging all work stolen), we know the queue is empty.
              // Otherwise, if the index differs then it means we helped assist another
              // segment in work stealing and we should move to it as if there is any work
              // available, it would be there.
              if _idx == idx && !hasElem {
                return (false, _defaultOf(eltType));
              } else {
                idx = _idx;
              }

              continue;
            }

            // We're lucky; another element has been added to the current segment,
            // take it and leave like normal...
            var (hasElem, elem) : (bool, eltType);
            for elt in segment.takeElements(1) do (hasElem, elem) = (true, elt);
            segment.releaseStatus();
            return (hasElem, elem);
          }
        }
        // If someone else is stealing work, we add ourself as a potential helper
        // to help speed this along, and hopefully we get an element for ourself.
        when STEALING_WORK {
          var (hasElem, elem) = helpStealWork(startIdx);

          // We have our element...
          if hasElem {
            return (hasElem, elem);
          }
          backoff = 0;
        }
      }

      // Backoff to maximum...
      if backoff == 0 then chpl_task_yield();
      else sleep(max(1000, 2 ** backoff), TimeUnits.microseconds);
      backoff = backoff + 1;
    }

    halt("Somehow exited without acquiring an item for dequeue...");
  }

  /*
    Work Stealing
  */

  // We have the lock but it is empty, try to set ourself as work stealer...
  // As our index can change based on whether or not we become the work stealer
  // or help someone else become the work stealer, we return our acquired index.
  proc stealWork(idx) : (int, bool, eltType) {
    ref seg = segments[idx];

    if logMPMCQueue then writeln("Attempting to steal work for segment #", idx);

    // If we set ourself as work stealer, we may proceed, otherwise if someone else
    // is set, we help them out instead...
    while true {
      if workStealer.compareExchangeStrong(-1, idx) then break;

      // Someone else is set...
      var currStealer = workStealer.read();
      if currStealer != -1 {
        seg.status.write(UNLOCKED);
        var (hasElem, elem) = helpStealWork(currStealer);
        return (currStealer, hasElem, elem);
      }
    }

    // We are the current work stealer, so our responsibility is to initialize
    // all work statuses and signal that we may begin our work stealing
    for status in seg.workStealingStatus do status.write(INITIALIZED);
    seg.workStealingIdx.write(0);
    seg.status.write(STEALING_LOCAL_WORK);

    // Help steal work with everyone else
    var (hasElem, elem) = helpStealWork(idx);
    seg.status.write(STEALING_MERGE);
    if logMPMCQueue then writeln("Merging work stolen on segment #", idx);

    // We are finished, all work stolen (if any) are now available...
    // As work stealer, our next job is merge it all together...
    for i in 0..#here.maxTaskPar {
      // Spin until they are finished... if they finish but have no work, skip them
      while seg.workStealingStatus[i].read() <= CLAIMED do chpl_task_yield();
      if i == idx || seg.workStealingStatus[i].read() != FINISHED_WITH_WORK then continue;

      // TODO: Find a way copy data from one tuple to another that is faster
      ref stolenBlock = seg.workStolen[i];
      var tailBlock = seg.tailBlock;

      var blockElems = stolenBlock.nElems;
      seg.nElems.add(blockElems : uint);
      while stolenBlock.nElems > 0 {
        // If we haven't stolen an element by now, do so
        if !hasElem {
          elem = stolenBlock.elems[stolenBlock.nElems];
          hasElem = true;
          stolenBlock.nElems = stolenBlock.nElems - 1;
          seg.nElems.sub(1);
          if logMPMCQueue then writeln("Lifted element ", elem, " from block stolen from segment #", i, " as segment #", idx);
          continue;
        }

        if tailBlock.nElems == ELEMS_PER_BLOCK {
          tailBlock.next = new WorkQueueSegmentBlock(eltType);
          seg.tailBlock = tailBlock.next;
          tailBlock = tailBlock.next;
        }

        tailBlock.nElems = tailBlock.nElems + 1;
        tailBlock.elems[tailBlock.nElems] = stolenBlock.elems[stolenBlock.nElems];
        stolenBlock.nElems = stolenBlock.nElems - 1;
      }

      delete stolenBlock;
    }

    // Check to see if we have actually stolen any work. (I.E: We haven't lifted any)
    if !hasElem {
      // Since we can verify that the queue is empty, we need to look elsewhere.

    }

    // No longer work stealer
    workStealer.write(-1);
    seg.status.write(UNLOCKED);

    // At this point, we have successfully stolen work. Furthermore, we have
    // stolen at least one element for ourself.
    return (idx, hasElem, elem);
  }

  proc helpStealGlobalWork(idx) : (bool, eltType) {
    ref seg = segments[idx : int];

    while true {
      var currStatus = seg.status.read();

      select currStatus {
        // They are still initializing...
        when STEALING_GLOBAL_INIT {
          // Do nothing...
        }
        // They are initialized, we can now attempt to help...
        when STEALING_GLOBAL_WORK {
          break;
        }
        // We're not stealing work (globally)...
        otherwise do return (false, _defaultOf(eltType));
      }
    }

    if logMPMCQueue then writeln("Helping steal work (globally) for Locale-segment #", here.id, "-", idx);
    var (hasElem, elem) : (bool, eltType);
    var stolenBlock = new WorkQueueSegmentBlock(eltType);

    // Obtain our working index. If it is above the maximum allowed for concurrent
    // helpers, we just return early in hope to find work elsewhere. It should be
    // noted that the work stealer only resets the counter after reinitializing the
    // segment's work stealing state. If we get preempted long enough to miss the
    // current work stealing session, then it would have to be after the previous ended
    // and the current has been initialized.
    while true {
      var ourIdx = seg.workStealingIdx.fetchAdd(1);
      if ourIdx == idx then continue;
      if ourIdx >= here.maxTaskPar {
        return (hasElem, elem);
      }
      ref wsStatus = seg.workStealingStatus[ourIdx];
      wsStatus.write(CLAIMED);

      // When we steal globally, we take enough to fill one block. We begin at a
      // randomized locale that is not our own (in order to reduce the chances of too
      // many of our helper tasks hitting the same locale over and over again, depleting it).
      var rand = makeRandomStream(int);
      var localeIdx = rand.getNext() % (targetLocales.domain.high + 1);
      var maxIterations = targetLocales.domain.high;
      var iterations = 0;
      var nElemsToSteal = ELEMS_PER_BLOCK;

      while iterations < maxIterations {
        var startSegmentIdx = rand.getNext() % targetLocales[localeIdx].maxTaskPar;

        on targetLocales[localeIdx] {
          // Localize some of the data at the beginning to avoid excessive communication
          var segmentIdx = startSegmentIdx;
          var (_hasElem, _elem) : (bool, eltType);
          _hasElem = hasElem;
          var stolenElems : ELEMS_PER_BLOCK * eltType;
          var theirQueue = workQueues[workQueues.domain.subDomain().first];

          var maxSegmentIterations = here.maxTaskPar;
          var segmentIterations = 0;
          // Search all segments...
          while segmentIterations < maxSegmentIterations {
            ref _seg = theirQueue.segments[segmentIdx];

            // Attempt to acquire...
            while !_seg.isEmpty {
              if _seg.status.read() == UNLOCKED && _seg.status.compareExchangeStrong(UNLOCKED, DEQUEUE) {
                var (__hasElem, __elem) = _seg.take;
                if !_hasElem {
                  _hasElem = __hasElem;
                  _elem = __elem;
                } else {
                  stolenElem
                }

                _seg.status.write(UNLOCKED);
                if hasElem {
                  return (hasElem, elem);
                }
              }

              // Backoff
              chpl_task_yield();
            }

            segmentIterations = segmentIterations + 1;
            segmentIdx = segmentIdx % here.maxTaskPar;
          }
        }

        localeIdx = (localeIdx + 1) % (targetLocales.domain.high + 1);
        iterations = iterations + 1;
      }


      // Do our part by stealing work...
      ref otherSeg = segments[ourIdx];
      while !otherSeg.isEmpty {
        if otherSeg.status.read() != UNLOCKED {
          chpl_task_yield();
        } else if otherSeg.status.compareExchangeStrong(UNLOCKED, VICTIM) {
          break;
        }
      }

      if otherSeg.isEmpty {
        wsStatus.write(FINISHED_WITH_NO_WORK);
        otherSeg.status.write(UNLOCKED);
        continue;
      }

      if !hasElem {
        // Steal an item...
        (hasElem, elem) = (true, otherSeg.headBlock.elems[otherSeg.headBlock.nElems]);
        otherSeg.headBlock.nElems = otherSeg.headBlock.nElems - 1;
        otherSeg.nElems.sub(1);
        if logMPMCQueue then writeln("Lifted element ", elem, " from block stolen from segment #", ourIdx, " as helper for segment #", idx);

        // Fix list if we consumed last one...
        if otherSeg.headBlock.nElems == 0 {
          var block = otherSeg.headBlock;
          otherSeg.headBlock = otherSeg.headBlock.next;
          delete block;
        }

        if otherSeg.isEmpty {
          wsStatus.write(FINISHED_WITH_NO_WORK);
          otherSeg.status.write(UNLOCKED);
          continue;
        }
      }

      // Report what has been stolen...
      var nStolen = otherSeg.headBlock.nElems : uint;
      seg.workStolen[ourIdx] = otherSeg.headBlock;
      otherSeg.nElems.sub(nStolen);
      otherSeg.headBlock = otherSeg.headBlock.next;
      wsStatus.write(FINISHED_WITH_WORK);
      otherSeg.status.write(UNLOCKED);

      if logMPMCQueue then writeln("Finished stealing ", nStolen, " amounts of work for segment #", idx);
    }

    halt("Exited helpStealWork loop...");
  }

  proc helpStealWork(idx) : (bool, eltType) {
    ref seg = segments[idx : int];

    while true {
      var currStatus = seg.status.read();

      select currStatus {
        // They are still initializing...
        when STEALING_INIT {
          // Do nothing...
        }
        // They are initialized, we can now attempt to help...
        when STEALING_WORK {
          break;
        }
        // We're not stealing work...
        otherwise do return (false, _defaultOf(eltType));
      }
    }

    if logMPMCQueue then writeln("Helping steal work for segment #", idx);
    var (hasElem, elem) : (bool, eltType);

    while true {
      // Obtain our working index. If it is above the maximum allowed for concurrent
      // helpers, we just return early in hope to find work elsewhere. It should be
      // noted that the work stealer only resets the counter after reinitializing the
      // segment's work stealing state. If we get preempted long enough to miss the
      // current work stealing session, then it would have to be after the previous ended
      // and the current has been initialized.
      var ourIdx = seg.workStealingIdx.fetchAdd(1);
      if ourIdx == idx then continue;
      if ourIdx >= here.maxTaskPar {
        return (hasElem, elem);
      }
      ref wsStatus = seg.workStealingStatus[ourIdx];
      wsStatus.write(CLAIMED);


      if logMPMCQueue then writeln("Assigned to steal work from segment #", ourIdx, " for segment #", idx);

      // Do our part by stealing work...
      ref otherSeg = segments[ourIdx];
      while !otherSeg.isEmpty {
        if otherSeg.status.read() != UNLOCKED {
          chpl_task_yield();
        } else if otherSeg.status.compareExchangeStrong(UNLOCKED, VICTIM) {
          break;
        }
      }

      if otherSeg.isEmpty {
        wsStatus.write(FINISHED_WITH_NO_WORK);
        otherSeg.status.write(UNLOCKED);
        continue;
      }

      if !hasElem {
        // Steal an item...
        (hasElem, elem) = (true, otherSeg.headBlock.elems[otherSeg.headBlock.nElems]);
        otherSeg.headBlock.nElems = otherSeg.headBlock.nElems - 1;
        otherSeg.nElems.sub(1);
        if logMPMCQueue then writeln("Lifted element ", elem, " from block stolen from segment #", ourIdx, " as helper for segment #", idx);

        // Fix list if we consumed last one...
        if otherSeg.headBlock.nElems == 0 {
          var block = otherSeg.headBlock;
          otherSeg.headBlock = otherSeg.headBlock.next;
          delete block;
        }

        if otherSeg.isEmpty {
          wsStatus.write(FINISHED_WITH_NO_WORK);
          otherSeg.status.write(UNLOCKED);
          continue;
        }
      }

      // Report what has been stolen...
      var nStolen = otherSeg.headBlock.nElems : uint;
      seg.workStolen[ourIdx] = otherSeg.headBlock;
      otherSeg.nElems.sub(nStolen);
      otherSeg.headBlock = otherSeg.headBlock.next;
      wsStatus.write(FINISHED_WITH_WORK);
      otherSeg.status.write(UNLOCKED);

      if logMPMCQueue then writeln("Finished stealing ", nStolen, " amounts of work for segment #", idx);
    }

    halt("Exited helpStealWork loop...");
  }
}

class DistributedWorkQueue : Queue {
  var targetLocales : [] locale = Locales;
  var perLocaleDomain = domain(1) dmapped Block(boundingBox=targetLocales.domain, targetLocales=targetLocales);
  var workQueues : [perLocaleDomain] WorkQueue(eltType);

  proc DistributedWorkQueue(type eltType) {
    forall loc in Locales {
      on loc {
        workQueues[workQueues.domain.subDomain().first] = new WorkQueue(eltType);
      }
    }
  }
}

proc proof_of_correctness() {
  var nElementsForMPMC = 1000000;
  writeln("Starting MPMCQueue Proof of Correctness (Work Depletion) Test ~ nElementsForMPMC: ", nElementsForMPMC);

  var queue = new WorkQueue(int);
  var counter : atomic int;
  var expected = (nElementsForMPMC * (nElementsForMPMC + 1)) / 2;

  forall i in 1 .. nElementsForMPMC {
    queue.enqueue(i);
  }

  coforall loc in Locales do on loc {
    var localeLocalCounter : atomic int;
    coforall tid in 0 .. #here.maxTaskPar {
      var taskLocalCounter : int;
      while true {
        var (present, elem) = queue.dequeue();
        if !present {
          break;
        }

        taskLocalCounter = taskLocalCounter + elem;
      }
      localeLocalCounter.add(taskLocalCounter);
    }
    writeln(here, ": Counter=", localeLocalCounter.read());
    counter.add(localeLocalCounter.read());
  }

  if counter.read() == expected {
    writeln("PASSED TEST!");
  } else {
    writeln("FAILED TEST! Expected: ", expected, ", but received: ", counter.read());
    writeln(queue);
  }
}

proc benchmark() {
  var nJitter = 0;
  var nComputations = 0;
  var nElements = 1000000;
  var nTrials = 8;
  var enqueueTrialTime : [1 .. nTrials] real;
  var dequeueTrialTime : [1 .. nTrials] real;

  // Obtain average time for enqueue followed by dequeued...
  for i in 1 .. nTrials {
    var queue = new WorkQueue(int);
    // We only use one or the other, but we must declare both.
    // TODO: Have both implement some parent 'Queue' class/interface?
    var timer = new Timer();
    timer.start();

    coforall loc in Locales do on loc {
      var iterations = nElements;

      coforall tid in 0 .. #here.maxTaskPar {
        var x : atomic int;
        var randStr = makeRandomStream(int);
        for j in 1 .. iterations / here.maxTaskPar {
          queue.enqueue(j);
          var nComps = nComputations + (if nJitter then (randStr.getNext() % nJitter) else 0);
          for i in 1 .. nComps {
            // Hopefully compiler doesn't throw away?
            x.write(sin(i) : int);
          }
        }
      }
    }

    timer.stop();
    enqueueTrialTime[i] = nElements / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce enqueueTrialTime) / i);
    timer.clear();
    timer.start();

    coforall loc in Locales do on loc {
      var iterations = nElements;

      coforall tid in 0 .. #here.maxTaskPar {
        var x : atomic int;
        var randStr = makeRandomStream(int);
        for j in 1 .. iterations / here.maxTaskPar {
          var retval = queue.dequeue();
          var nComps = nComputations + (if nJitter then (randStr.getNext() % nJitter) else 0);
          for i in 1 .. nComps {
            // Hopefully compiler doesn't throw away?
            x.write(sin(i) : int);
          }
        }
      }
    }

    timer.stop();
    dequeueTrialTime[i] = nElements / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce dequeueTrialTime) / i);

    delete queue;
  }
}

proc main() {
  benchmark();
}
