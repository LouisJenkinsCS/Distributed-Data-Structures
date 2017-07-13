use Queue;
use BigInteger;

const UNLOCKED : uint = 0;
const ENQUEUE : uint = 1;
const DEQUEUE : uint = 2;
const STEALING : uint = 3;
const VICTIM : uint = 4;

record LocalWorkQueueSegment {
  type eltType;

  var status : atomic uint;

  var segmentDataSpace = { 1 .. 1024 };
  var segmentData : [segmentDataSpace] eltType;
  var segmentDataBitmap : bigint;

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
}

class LocalWorkQueue : Queue {
  var startIdxEnq : atomic uint;
  var startIdxDeq : atomic uint;
  var workStealer : atomic int;

  var maxParallelSegmentSpace = {0 .. #here.maxTaskPar};
  var segments : [maxParallelSegmentSpace] LocalWorkQueueSegment(eltType);

  const maxIterationsPerPhase = here.maxTaskPar;

  // In Phase 1, we attempt to acquire the first bucket that is unlocked
  inline proc enqueueAcquirePhase1(startIdx) : int {
    var idx = startIdx : int;
    var iterations = 0;

    // Find first free bucket
    while iterations < maxIterationsPerPhase {
      ref seg = segments[idx];

      // Attempt to acquire...
      if seg.status.read() == UNLOCKED && seg.status.compareExchangeStrong(UNLOCKED, ENQUEUE) {
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

  proc enqueueAcquire(startIdx) : int {
    var retval = enqueueAcquirePhase1(startIdx);
    if retval == -1 {
      retval = enqueueAcquirePhase2(startIdx);
    }

    return retval;
  }

  proc enqueue(elt : eltType) {
    var idx = startIdxEnq.fetchAdd(1) % here.maxTaskPar : uint;
    const maxIterations = here.maxTaskPar;

    var segmentIdx = enqueueAcquire(idx);
    ref seg = segments[segmentIdx];

    if seg.nElems.read() == seg.segmentDataSpace.high {
      var newSize = seg.segmentDataSpace.high * 2;
      seg.segmentDataSpace = {1 .. newSize};
    }

    var firstFreeBit = seg.segmentDataBitmap.scan0(1) : int;
    seg.segmentDataBitmap.setbit(firstFreeBit);
    seg.segmentData[firstFreeBit] = elt;
    seg.nElems.add(1);

    seg.status.write(UNLOCKED);
  }
}

proc main() {
  var queue = new LocalWorkQueue(int);
  forall i in 1 .. 1000000 {
    queue.enqueue(i);
  }
  writeln(queue);
}
