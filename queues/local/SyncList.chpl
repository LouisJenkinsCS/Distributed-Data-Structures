use List;
use Queue;

class SyncList : Queue {
  var data : list(eltType);
  var lock$ : sync bool;

  proc SyncList(type eltType) {
    data = new list(eltType);
  }

  proc enqueue(elt : eltType) {
    lock$ = true;
    data.push_back(elt);
    lock$;
  }

  proc dequeue() : (bool, eltType) {
    var (hasElem, elem) : (bool, eltType);
    lock$ = true;
    if data.length {
      hasElem = true;
      elem = data.pop_front();
    }
    lock$;
    return (hasElem, elem);
  }
}

config const nElementForSyncList = 1000000;
proc main() {
  writeln("Starting SyncList Proof-Of-Correctness Test ~ nElementForSyncList=", nElementForSyncList);
  var queue = new SyncList(int);

  for i in 1 .. nElementForSyncList {
    queue.enqueue(i);
  }

  for i in 1 .. nElementForSyncList {
    var retval = queue.dequeue();
    if retval[2] != i {
      writeln("BAD RESULT! Expected ", i, ", Received ", retval);
      return;
    }
  }

  writeln("PASSED!");
}
