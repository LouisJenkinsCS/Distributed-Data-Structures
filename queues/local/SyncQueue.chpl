use Queue;

class SyncNode {
  type eltType;
  var elt : eltType;
  var next : SyncNode(eltType);
}

class SyncQueue : Queue {
  var head : SyncNode(eltType);
  var headLock$ : sync bool;
  var tail : SyncNode(eltType);
  var tailLock$ : sync bool;


  proc SyncQueue(type eltType) {
    var dummy = new SyncNode(eltType);
    head = dummy;
    tail = dummy;
  }

  proc enqueue(elt : eltType) {
    var node = new SyncNode(eltType, elt);
    tailLock$ = true;
    tail.next = node;
    tail = node;
    tailLock$;
  }

  proc dequeue() : (bool, eltType) {
    var elt : eltType;
    headLock$ = true;
    var node = head;
    var newHead = head.next;

    // Empty
    if newHead == nil {
      headLock$;
      return (false, _defaultOf(eltType));
    }

    // Grab and clean up
    elt = newHead.elt;
    head = newHead;
    delete node;
    headLock$;
    return (true, elt);
  }
}


config const nElementForSyncQueue = 1000000;
proc main() {
  writeln("Starting SyncQueue Proof-Of-Correctness Test ~ nElementForSyncQueue=", nElementForSyncQueue);
  var queue = new SyncQueue(int);

  for i in 1 .. nElementForSyncQueue {
    queue.enqueue(i);
  }

  for i in 1 .. nElementForSyncQueue {
    var retval = queue.dequeue();
    if retval[2] != i {
      writeln("BAD RESULT! Expected ", i, ", Received ", retval);
      return;
    }
  }

  writeln("PASSED!");
}
