use BlockDist;

/*
  TODO: In QueueFactory, replace with 'proc type Queue.makeBoundedFIFO' etc.
*/

// Determines status of a slot.
const SLOT_EMPTY = 0;
const SLOT_FULL = 1;

record DistributedBoundedFIFOSlot {
  type eltType;

  var elt : eltType;
  var status : atomic int;
  var isEnq : atomic bool;
  var isDeq : atomic bool;
  var promise : atomic uint;
}

class DistributedBoundedFIFO {
  type eltType;
  var cap : int;

  // Two monotonically increasing counters used in deciding which locale to choose from
  var globalHead : atomic uint;
  var globalTail : atomic uint;
  var queueSize : atomic int;

  // per-locale data
  var eltSlotsSpace = {0..#cap};
  var eltSlotsDomain = eltSlotsSpace dmapped Block(boundingBox=eltSlotsSpace);
  var eltSlots : [eltSlotsDomain] DistributedBoundedFIFOSlot(eltType);

  proc DistributedBoundedFIFO(type eltType) {
    if cap == 0 then halt("Cap cannot be 0!");
  }

  proc enqueue(elt : eltType) : bool {
    // Try to see if there is room...
    while true {
      var sz = queueSize.fetchAdd(1);
      if sz >= cap {
        return false;
      } else if sz >= 0 {
        break;
      }
    }

    while true {
      var head = globalHead.fetchAdd(1) % cap;
      ref slot = eltSlots[head : int];
      var promise = slot.promise.fetchAdd(1);

      // If the promise is 0, then it will become EMPTY soon and we can add to it.
      // However, we need to wait until after a concurrent dequeue operation finishes.
      if promise == 0 {
        // Another enqueuer is waiting on this cell...
        while slot.isEnq.testAndSet() do chpl_task_yield();

        slot.status.waitFor(SLOT_EMPTY);
        slot.elt = elt;
        slot.status.write(SLOT_FULL);

        slot.isEnq.write(false);
        return true;
      }
      // If the promise is negative, that means that a dequeue operation has skipped
      // this slot, and we must do so as well to correct the queue.
      else if promise < 0 {
        continue;
      }
      // If the promise is positive, that means that the queue is full. This means
      // that the promise is > 0, meaning any other dequeue will correct and skip
      // this slot by decrementing the count atomically.
      else if promise > 0 {
        return false;
      }
    }

    halt("Broke out of enqueue loop...");
  }

  proc dequeue() : (bool, eltType) {
    while true {
      var sz = queueSize.fetchSub(1);
      if sz <= 0 {
        return false;
      } else if sz <= cap {
        break;
      }
    }

    while true {
      var tail = globalTail.fetchAdd(1) % cap;
      ref slot = eltSlots[tail : int];
      var promise = slot.promise.fetchSub(1);

      // If the promise is 1, then it will become FULL soon and we can take from it.
      // However, we need to wait until after a concurrent enqueue operation finishes.
      if promise == 1 {
        // Another dequeuer is waiting on this cell...
        while slot.isDeq.testAndSet() do chpl_task_yield();

        slot.status.waitFor(SLOT_FULL);
        var elt = slot.elt;
        slot.status.write(SLOT_EMPTY);

        slot.isDeq.write(false);
        return (true, elt);
      }
      // If the slot promises more than 1 element, then an enqueue operation has skipped
      // this slot, and we must do so as well to correct the queue.
      else if promise > 1 {
        continue;
      }
      // If the promise is 0, then the queue is empty; if the promise is negative,
      // that means other dequeue operations have also skipped this and it has no yet
      // been remedied by other enqueue operation.
      else if promise < 1 {
        return (false, _defaultOf(eltType));
      }
    }

    halt("Broke out of dequeue loop...");
  }
}


proc main() {
  var queue = new DistributedBoundedFIFO(int, cap=100);

  for i in 1 .. 100 {
    assert(queue.enqueue(i));
  }

  assert(!queue.enqueue(101));

  for i in 1 .. 100 {
    var retval = queue.dequeue();
    if !retval[1] || retval[2] != i {
      halt("i: ", i, "retval: ", retval);
    }
  }

  writeln(queue);
}
