use Collection.Queue;
use BlockDist;
use Time;
use Random;

record DistributedBoundedFIFOSlot {
  type eltType;

  var elt : eltType;
  var status : atomic int;
  var isEnq : atomic bool;
  var isDeq : atomic bool;
}

// Determines status of a slot.
const SLOT_EMPTY = 0;
const SLOT_FULL = 1;

/*
  Bounded queue that is distributed across nodes.
*/
class DistributedBoundedQueue : BoundedQueue {
  var cap : int;

  // Two monotonically increasing counters used in deciding which locale to choose from
  var globalHead : atomic uint;
  var globalTail : atomic uint;
  var queueSize : atomic int;

  // per-locale data
  var eltSlotsSpace = {0..#cap};
  var eltSlotsDomain = eltSlotsSpace dmapped Block(boundingBox=eltSlotsSpace);
  var eltSlots : [eltSlotsDomain] DistributedBoundedFIFOSlot(eltType);

  proc DistributedBoundedQueue(type eltType) {
    if cap == 0 then halt("Cap cannot be 0!");
  }

  proc add(elts : eltType ... ?nElts) : bool {
    // Fast path... Check if queue has space...
    if queueSize.read() + nElts > cap {
      return false;
    }

    // Wait free approach...
    // If what was read is out of range, the queue is full and we bail early.
    // In the case that it is within a valid range, [0, cap), we commit. Note
    // that the cases where we increment the queueSize and bail is fixed by
    // dequeue operations.
    if nElts == 1 {
      while true {
        var sz = queueSize.fetchAdd(1);
        if sz >= cap {
          return false;
        } else if sz >= 0 {
          break;
        }
      }
    }

    // Lock free approach...
    // If more than one element is to be added, they must all be added as one
    // transaction. Due to this, a fetchAdd will not do since it can claim
    // valid ranges, so we must use a Compare-And-Swap. This makes adding in
    // bulk *significantly* slower than adding sequentially.
    else {
      var success = false;
      on this {
        while true {
          var sz = queueSize.read();
          if sz < 0 {
            // Fix counter...
            if !queueSize.compareExchangeStrong(sz, 0) {
              continue;
            }

            // We fixed counter to 0, so we know sz is now 0.
            sz = 0;
          }

          // Space check...
          if sz + nElts > cap {
            break;
          } else if queueSize.compareExchangeStrong(sz, sz + nElts) {
            success = true;
            break;
          }
        }
      }

      if !success {
        return false;
      }
    }

    // Commit all items at once; if there are multiple this ensures that we
    // insert them in FIFO order in a linearizable fashion.
    var head = globalHead.fetchAdd(nElts) % cap : uint;
    var iterations = nElts;
    var idx = 1;
    while iterations > 0 {
      ref slot = eltSlots[head : int];

      // Another enqueuer is waiting on this cell...
      while slot.isEnq.testAndSet() do chpl_task_yield();

      slot.status.waitFor(SLOT_EMPTY);
      slot.elt = elts[idx];
      slot.status.write(SLOT_FULL);

      slot.isEnq.write(false);
      iterations = iterations - 1;
      head = (head + 1) % cap : uint;
      idx = idx + 1;
    }

    halt("Broke out of enqueue loop...");
  }

  proc remove() : (bool, eltType) {
    // Fast path... check if queue is empty...
    if queueSize.read() < 1 {
      return (false, _defaultOf(eltType));
    }

    while true {
      var sz = queueSize.fetchSub(1);
      if sz <= 0 {
        return (false, _defaultOf(eltType));
      } else if sz <= cap {
        break;
      }
    }

    while true {
      var tail = globalTail.fetchAdd(1) % cap : uint;
      ref slot = eltSlots[tail : int];
      // Another dequeuer is waiting on this cell...
      while slot.isDeq.testAndSet() do chpl_task_yield();

      slot.status.waitFor(SLOT_FULL);
      var elt = slot.elt;
      slot.status.write(SLOT_EMPTY);

      slot.isDeq.write(false);
      return (true, elt);
    }

    halt("Broke out of dequeue loop...");
  }
}

proc main() {
  var queue = new DistributedBoundedQueue(int, cap=100);
  queue += (1,2,3,4,5);
  writeln(queue);
}
