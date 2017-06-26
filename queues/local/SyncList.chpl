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
