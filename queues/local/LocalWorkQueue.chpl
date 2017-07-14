use Queue;
use Random;
use Time;
use BigInteger;

const UNLOCKED : uint = 0;
const ENQUEUE : uint = 1;
const DEQUEUE : uint = 2;
const STEALING : uint = 3;
const VICTIM : uint = 4;

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

  var blockSpace = { 0 .. 0 };
  var headBlock : LocalWorkQueueSegmentBlock(eltType);
  var tailBlock : LocalWorkQueueSegmentBlock(eltType);

  // For when we are stealing work... helper threads may attempt to
  // help during a steal by setting one of the values from -1 to 0, and
  // when they are finished they may set it to 1 indicating that they are finished.
  // The first part helps distribute work to tasks waiting and doing nothing, and the
  // last part helps us know when we can declare that work stealing is finished.
  var workStealingStatus : [{0 .. #here.maxTaskPar}] atomic int;

  // Number of elements currently in the list to allow faster determinism of whether
  // or not an operation should attempt this bucket. Also doubles as the helper work
  // stealing counter;
  var nElems : atomic uint;

  proc LocalWorkQueueSegment(type eltType) {
    headBlock = new LocalWorkQueueSegmentBlock(eltType);
    tailBlock = headBlock;
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

  /*
    Enqueue...
  */

  proc enqueue(elt : eltType) {
    var startIdx = startIdxEnq.fetchAdd(1) % here.maxTaskPar : uint;
    var segmentIdx = enqueueAcquire(startIdx);
    ref seg = segments[segmentIdx];
    var block = seg.tailBlock;

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
          when STEALING {
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
          when STEALING {
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
}

// Phase 3: Take any bucket whether it is locked or unlocked, empty or non-empty
inline proc dequeueAcquirePhase3(startIdx) : int {
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
      when STEALING {
        // TODO
        backoff = 0;
      }
    }

    // Backoff to maximum...
    if backoff == 0 then chpl_task_yield();
    else sleep(max(1000, 2 ** backoff), TimeUnits.microseconds);
  }

  halt("Somehow exited loop in Phase 3...");
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
