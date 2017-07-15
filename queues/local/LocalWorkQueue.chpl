use Queue;
use Random;
use Time;
use BigInteger;


// Segment statuses
const UNLOCKED : uint = 0;
const ENQUEUE : uint = 1;
const DEQUEUE : uint = 2;
const STEALING : uint = 3;
const STEALING_INIT : uint = 4;
const VICTIM : uint = 5;

// Work Stealing statuses
const UNINITIALIZED : int = -2;
const INITIALIZED : int = -1;
const CLAIMED : int = 0;
const FINISHED_WITH_NO_WORK : int = 1;
const FINISHED_WITH_WORK : int = 2;


config param ELEMS_PER_BLOCK = 1024;

class LocalWorkQueueSegmentBlock {
  type eltType;
  var idx = 1;
  var elems : ELEMS_PER_BLOCK * eltType;
  var next : LocalWorkQueueSegmentBlock(eltType);
}

record LocalWorkQueueSegment {
  type eltType;

  var status : atomic uint;

  var headBlock : LocalWorkQueueSegmentBlock(eltType);
  var tailBlock : LocalWorkQueueSegmentBlock(eltType);

  // For when we are stealing work... helper threads may attempt to
  // help during a steal by setting one of the values from -1 to 0, and
  // when they are finished they may set it to 1 indicating that they are finished.
  // The first part helps distribute work to tasks waiting and doing nothing, and the
  // last part helps us know when we can declare that work stealing is finished.
  var workStealingStatus : [{0 .. #here.maxTaskPar}] atomic int;
  var workStolen : [{0 .. #here.maxTaskPar}] LocalWorkQueueSegmentBlock(eltType);
  var workStealingIdx : atomic int;

  // Number of elements currently in the list to allow faster determinism of whether
  // or not an operation should attempt this bucket.
  var nElems : atomic uint;

  inline proc isEmpty {
    return nElems.read() == 0;
  }
}

class LocalWorkQueue : Queue {
  // Place in own cache line
  var startIdxEnq : atomic uint;
  var startIdxDeq : atomic uint;
  var workStealer : atomic int;

  var maxParallelSegmentSpace = {0 .. #here.maxTaskPar};
  var segments : [maxParallelSegmentSpace] LocalWorkQueueSegment(eltType);

  const maxIterationsPerPhase = here.maxTaskPar;

  proc LocalWorkQueue(type eltType) {
    workStealer.write(-1);
  }

  /*
    Enqueue...
  */

  proc enqueue(elt : eltType) {
    var startIdx = startIdxEnq.fetchAdd(1) % here.maxTaskPar : uint;
    var segmentIdx = enqueueAcquire(startIdx);
    ref seg = segments[segmentIdx];
    var block = seg.tailBlock;

    // Empty?
    if block == nil then {
      seg.tailBlock = new LocalWorkQueueSegmentBlock(eltType);
      seg.headBlock = seg.tailBlock;
    }

    // Full?
    if block.idx > ELEMS_PER_BLOCK {
      block.next = new LocalWorkQueueSegmentBlock(eltType);
      seg.tailBlock = block.next;
      block = block.next;
    }

    block.elems[block.idx] = elt;
    block.idx = block.idx + 1;

    seg.nElems.add(1);
    seg.status.write(UNLOCKED);
  }

  proc enqueueAcquire(startIdx) : int {
    var retval = enqueueAcquirePhase1(startIdx);
    if retval == -1 {
      retval = enqueueAcquirePhase2(startIdx);
    }

    return retval;
  }

  // In Phase 1, we attempt to acquire the first bucket that is unlocked
  inline proc enqueueAcquirePhase1(startIdx) : int {
    var idx = startIdx : int;
    var iterations = 0;

    // Find first free bucket
    while iterations < maxIterationsPerPhase {
      ref seg = segments[idx];

      // Attempt to acquire...
      if seg.status.compareExchangeStrong(UNLOCKED, ENQUEUE) {
        return idx;
      }

      iterations = iterations + 1;
      idx = (idx + 1) % here.maxTaskPar;
    }

    return -1;
  }

  // In Phase 2, we attempt to acquire the first bucket that is locked...
  inline proc enqueueAcquirePhase2(startIdx) : int {
    var idx = startIdx : int;

    // Find first free bucket
    while true {
      ref seg = segments[idx];

      // Attempt to acquire...
      while true {
        var currStatus = seg.status.read();

        select currStatus {
          when UNLOCKED do {
            if seg.status.compareExchangeStrong(UNLOCKED, ENQUEUE) {
              return idx;
            }
          }
          // If someone is stealing, then that means that we'd be waiting for a while
          // anyway, so we may as well attempt to find a node with a shorter wait time.
          when STEALING || STEALING_INIT {
            break;
          }
        }

        // TODO: Implement exponential backoff + yielding
        chpl_task_yield();
      }

      idx = (idx + 1) % here.maxTaskPar;
    }

    halt("Broke out of phase 2 without getting segment...");
  }


  /*
    Dequeue...
  */

  proc dequeue() : (bool, eltType) {
    var startIdx = startIdxDeq.fetchAdd(1) % here.maxTaskPar : uint;

  }

  // Phase 1: acquire unlocked bucket which contains elements
  inline proc dequeueAcquirePhase1(startIdx) : int {
    var idx = startIdx : int;
    var maxIterations = here.maxTaskPar;
    var iterations = 0;

    // Find first non-empty free bucket
    while iterations < maxIterations {
      ref seg = segments[idx];

      // Attempt to acquire...
      if seg.nElems.peek() != 0 && seg.status.compareExchangeStrong(UNLOCKED, DEQUEUE) {
        return idx;
      }

      iterations = iterations + 1;
      idx = (idx + 1) % here.maxTaskPar;
    }

    return -1;
  }

  // Phase 2: acquire locked bucket which contains elements
  inline proc dequeueAcquirePhase2(startIdx) : int {
    var idx = startIdx : int;
    var maxIterations = here.maxTaskPar;
    var iterations = 0;

    // Find first non-empty bucket
    while iterations < maxIterations {
      ref seg = segments[idx];

      // Attempt to acquire...
      while seg.nElems.read() != 0 {
        var currStatus = seg.status.read();

        select currStatus {
          // Quick acquire
          when UNLOCKED {
            if seg.status.compareExchangeStrong(UNLOCKED, DEQUEUE) {
              return idx;
            }
          }
          // This segment is being stolen from. Assist the current stealer.
          when VICTIM {
            // TODO
          }
          // If someone else is stealing work, we add ourself as a potential helper
          // to help speed this along, and hopefully we get an element for ourself.
          when STEALING || STEALING_INIT {
            // TODO
          }
        }

        // Backoff
        chpl_task_yield();
      }

      iterations = iterations + 1;
      idx = (idx + 1) % here.maxTaskPar;
    }

    return -1;
  }

  // Phase 3: Take any bucket whether it is locked or unlocked, empty or non-empty
  inline proc dequeueAcquirePhase3(startIdx) : (bool, eltType) {
    ref seg = segments[startIdx];

    // Attempt to acquire...
    while true {
      var backoff = 0;
      var currStatus = seg.status.read();

      select currStatus {
        // Quick acquire
        when UNLOCKED {
          if seg.status.compareExchangeStrong(UNLOCKED, DEQUEUE) {
            return idx;
          }
        }
        // This segment is being stolen from. Assist the current stealer.
        when VICTIM {
          // TODO
          backoff = 0;
        }
        // If someone else is stealing work, we add ourself as a potential helper
        // to help speed this along, and hopefully we get an element for ourself.
        when STEALING || STEALING_INIT {
          var (hasElem, elem) = helpStealWork(startIdx);

          // We have our element...
          if hasElem then return (hasElem, elem);

          // We don't have our element, but no element currently exists.
          if seg.isEmpty {
            return (false, _defaultOf(eltType));
          }
          backoff = 0;
        }
      }

      // Backoff to maximum...
      if backoff == 0 then chpl_task_yield();
      else sleep(max(1000, 2 ** backoff), TimeUnits.microseconds);
    }

    halt("Somehow exited loop in Phase 3...");
  }

  /*
    Work Stealing
  */

  // We have the lock but it is empty, try to set ourself as work stealer...
  // As our index can change based on whether or not we become the work stealer
  // or help someone else become the work stealer, we return our acquired index.
  proc stealWork(idx) : (bool, eltType) {
    ref seg = segments[idx];

    // If we set ourself as work stealer, we may proceed, otherwise if someone else
    // is set, we help them out instead...
    while true {
      if workStealer.compareExchangeStrong(-1, idx) then break;

      // Someone else is set...
      var currStealer = workStealer.read();
      if currStealer != -1 {
        seg.status.write(UNLOCKED);
        return helpStealWork(currStealer);
      }
    }

    // We are the current work stealer, so our responsibility is to initialize
    // all work statuses and signal that we may begin our work stealing
    for status in seg.workStealingStatus do status.write(INITIALIZED);
    seg.workStealingIdx.write(0);
    seg.status.write(STEALING_INIT);

    // Help steal work with everyone else
    var (hasElem, elem) = helpStealWork(idx);

    // We are finished, all work stolen (if any) are now available...
    // As work stealer, our next job is merge it all together...
    for i in 0..#here.maxTaskPar {
      // Spin until they are finished... if they finish but have no work, skip them
      while seg.workStealingStatus[i].read() == CLAIMED then chpl_task_yield();
      if i == idx || seg.workStealingStatus[i].read() != FINISHED_WITH_WORK then continue;

      // TODO: Find a way copy data from one tuple to another that is faster
      var blockElems = block.idx - 1;
      seg.nElems.add(blockElems);

      ref stolenBlock = seg.workStolen[i];
      ref tailBlock = seg.tailBlock;
      while stolenBlock.idx > 0 {
        // If we haven't stolen an element by now, do so
        if !hasElem {
          elem = stolenBlock.elems[stolenBlock.idx];
          hasElem = true;
          stolenBlock.idx = stolenBlock.idx - 1;
          continue;
        }

        if tailBlock.idx > ELEMS_PER_BLOCK {
          tailBlock.next = new LocalWorkQueueSegmentBlock(eltType);
          seg.tailBlock = tailBlock.next;
          tailBlock = tailBlock.next;
        }

        tailBlock.elems[tailBlock.idx] = stolenBlock.elems[stolenBlock.idx];
        stolenBlock.idx = stolenBlock.idx - 1;
        tailBlock.idx = tailBlock.idx + 1;
      }

      delete stolenBlock;
    }

    // No longer work stealer
    workStealer.write(-1);
    seg.status.write(UNLOCKED);

    // At this point, we have successfully stolen work. Furthermore, we have
    // stolen at least one element for ourself.
    return (hasElem, elem);
  }

  proc helpStealWork(idx) : (bool, eltType) {
    ref seg = segments[idx];

    while true {
      var currStatus = seg.status.read();

      select currStatus {
        // They are still initializing...
        when STEALING {
          // Do nothing...
        }
        // They are initialized, we can now attempt to help...
        when STEALING_INIT {
          break;
        }
        // We're not stealing work...
        otherwise do return (false, _defaultOf(eltType));
      }
    }

    var (hasElem, elem) : (bool, eltType);

    // We obtain our index which tells us which segment we need to steal from
    // It should be noted that we handle the edge cases where we get preempted long
    // enough here that the current work stealing endeavor is over. In the case where
    // work stealing is finished and the next has not started, 'ourIdx' will be greater
    // than or equal to here.maxTaskPar, meaning that we would spin anyway... If the next
    // work stealing endeavor has started, but it has not yet been initialized, then technically
    // the counter would be below here.maxTaskPar, but the workStealingStatus would likely be
    // 'FINISHED_WITH_WORK' or 'FINISHED_WITH_NO_WORK'. In the case, that it is neither then we have
    // already setup everything anyway, and we can partake in the next work stealing.
    while true {
      var ourIdx = seg.workStealingIdx.fetchAdd(1);
      ref wsStatus = seg.workStealingStatus[ourIdx];

      if ourIdx >= here.maxTaskPar {
        return (hasElem, elem);
      }
      if wsStatus.compareExchangeStrong(INITIALIZED, CLAIMED) == false {
        return (hasElem, elem);
      }
      if ourIdx == idx then continue;

      // Do our part by stealing work...
      ref otherSeg = segments[ourIdx];
      while !otherSeg.isEmpty {
        if otherSeg.status.read() != UNLOCKED {
          chpl_task_yield();
        } else if otherSeg.status.compareExchangeStrong(UNLOCKED, VICTIM) {
          break;
        }
      }

      if otherSeg.isEmpty() {
        wsStatus.write(FINISHED_WITH_NO_WORK);
        otherSeg.status.write(UNLOCKED);
        continue;
      }

      if !hasElem {
        // Steal an item... adjust index if it is full (went past end)
        if otherSeg.headBlock.idx > here.maxTaskPar {
          otherSeg.headBlock.idx = otherSeg.headBlock.idx - 1;
        }
        (hasElem, elem) = (true, otherSeg.headBlock.elems[otherSeg.headBlock.idx]);
        otherSeg.headBlock.idx = otherSeg.headBlock.idx - 1;
        otherSeg.nElems.sub(1);

        // Fix list if we consumed last one...
        if otherSeg.headBlock.idx == 0 {
          var block = otherSeg.headBlock;
          otherSeg.headBlock = otherSeg.headBlock.next;
          delete block;
        }

        if otherSeg.nElems.read() == 0 {
          wsStatus.write(FINISHED_WITH_NO_WORK);
          otherSeg.status.write(UNLOCKED);
          continue;
        }
      }

      // Report what has been stolen...
      seg.workStolen[ourIdx] = otherSeg.headBlock;
      otherSeg.headBlock = otherSeg.headBlock.next;
      wsStatus.write(FINISHED_WITH_WORK);
      otherSeg.status.write(UNLOCKED);
    }
  }
}


proc main() {
  var nJitter = 0;
  var nComputations = 0;
  var nElements = 1000000;
  var nTrials = 8;
  var enqueueTrialTime : [1 .. nTrials] real;

  // Obtain average time for enqueue followed by dequeued...
  for i in 1 .. nTrials {
    var queue = new LocalWorkQueue(int);
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
    delete queue;
  }
}
