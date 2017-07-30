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

  // To 'freeze' the queue, we must ensure that current mutating operations finish
  // first. However, at the same time we want to reduce communication by keeping
  // a task counter for each node that can be checked at next to no cost.
  var concurrentTasksDom = LocaleSpace dmapped Block(boundingBox=LocaleSpace);
  var concurrentTasks : [concurrentTasksDom] atomic uint;
  var frozenState : [concurrentTasksDom] atomic bool;

  // per-locale data
  var eltSlotsSpace = {0..#cap};
  var eltSlotsDomain = eltSlotsSpace dmapped Block(boundingBox=eltSlotsSpace);
  var eltSlots : [eltSlotsDomain] DistributedBoundedFIFOSlot(eltType);

  proc DistributedBoundedQueue(type eltType) {
    if cap == 0 then halt("Cap cannot be 0!");
  }

  inline proc ourConcurrentTasksIndex {
    return concurrentTasksDom.localSubdomain().first;
  }

  proc add(elts : eltType ... ?nElts) : bool {
    /*// Announce that we are currently using the queue...
    concurrentTasks[ourConcurrentTasksIndex].add(1);

    // Check if the queue is now 'immutable'.
    if frozenState[ourConcurrentTasksIndex].read() == true {
      concurrentTasks[ourConcurrentTasksIndex].sub(1);
      return false;
    }*/

    // Fast path... Check if queue has space...
    if queueSize.read() + nElts > cap {
      /*concurrentTasks[ourConcurrentTasksIndex].sub(1);*/
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
          /*concurrentTasks[ourConcurrentTasksIndex].sub(1);*/
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
        /*concurrentTasks[ourConcurrentTasksIndex].sub(1);*/
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

    /*concurrentTasks[ourConcurrentTasksIndex].sub(1);*/
    return true;
  }

  proc remove() : (bool, eltType) {
    // Announce that we are currently using the queue...
    concurrentTasks[ourConcurrentTasksIndex].add(1);

    // Check if the queue is now 'immutable'.
    if frozenState[ourConcurrentTasksIndex].read() == true {
      concurrentTasks[ourConcurrentTasksIndex].sub(1);
      return (false, _defaultOf(eltType));
    }

    // Fast path... check if queue is empty...
    if queueSize.read() < 1 {
      concurrentTasks[ourConcurrentTasksIndex].sub(1);
      return (false, _defaultOf(eltType));
    }

    while true {
      var sz = queueSize.fetchSub(1);
      if sz <= 0 {
        concurrentTasks[ourConcurrentTasksIndex].sub(1);
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
      concurrentTasks[ourConcurrentTasksIndex].sub(1);
      return (true, elt);
    }

    halt("Broke out of dequeue loop...");
  }

  proc freeze() {
    forall state in frozenState do state.write(true);

    // Wait for all ongoing tasks to finish. Any new tasks will see the new state.
    forall counter in concurrentTasks do counter.waitFor(0);
  }

  proc unfreeze() {
    forall state in frozenState do state.write(false);
  }

  // TODO: Allow this to be parallel-safe with respect to the freezing operation.
  // Such as adding a second state after we know all concurrent tasks have exited.
  inline proc isFrozen {
    return frozenState[ourConcurrentTasksIndex].read();
  }

  iter these() : eltType {
    if !isFrozen {
      halt("Attempted to iterate while queue is not frozen...");
    }

    for idx in globalTail.read() .. #globalHead.read() {
      yield eltSlots[(idx % cap : uint) : int].elt;
    }
  }
}

proc main() {
  var queue = new DistributedBoundedQueue(int, cap=100);
  queue.add(1,2,3,4,5);
  queue.freeze();
  for elt in queue do writeln(elt);
  forall elt in queue do writeln(elt);
}
