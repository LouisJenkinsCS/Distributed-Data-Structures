use FCHLock;
use Queue;
use List;


/*
  A Work In Progress - Do Not Use!
*/

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
  var counter : atomic int;
  var expected = (nElementForFCHQueue * (nElementForFCHQueue + 1)) / 2;

  forall i in 1 .. nElementForFCHQueue {
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
  }

}
