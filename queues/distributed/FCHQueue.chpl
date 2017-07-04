use FCHLock;
use Queue;
use List;

class EnqueueFunctor : FCHFunctor {
  type eltType;
  var elem : eltType;

  proc this(data : dataType) {
    data._list.push_back(elem);
  }
}

class DequeueFunctor : FCHFunctor {
  type eltType;
  var retval : eltType;
  var hasElem : bool;

  proc this(data : dataType) {
    if data._list.length {
      hasElem = true;
      retval = data._list.pop_front();
    }
  }
}

class FCHQueue : Queue {
  var _list : list(eltType);
  var fchLock : FCHLock(FCHQueue(eltType));

  proc FCHQueue(type eltType) {
    fchLock = new FCHLock(this);
  }

  proc enqueue(elt : eltType) {
    var f = new EnqueueFunctor(FCHQueue(eltType), eltType, elt);
    fchLock.synchronize(f);
    delete f;
  }

  proc dequeue() : (bool, eltType) {
    var f = new DequeueFunctor(FCHQueue(eltType), eltType);
    fchLock.synchronize(f);
    var (hasElem, retval) = (f.hasElem, f.retval);
    delete f;
    return (hasElem, retval);
  }
}


config const nElementForFCHQueue = 1000000;
proc main() {
  writeln("Starting FCHQueue Proof-Of-Correctness Test ~ nElementForFCHQueue=", nElementForFCHQueue);
  var queue = new FCHQueue(int);

  for i in 1 .. nElementForFCHQueue {
    queue.enqueue(i);
  }

  for i in 1 .. nElementForFCHQueue {
    var retval = queue.dequeue();
    if retval[2] != i {
      writeln("BAD RESULT! Expected ", i, ", Received ", retval);
      return;
    }
  }

  writeln("PASSED!");
}
