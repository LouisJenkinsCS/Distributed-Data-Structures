use List;
use Queue;
use Random;
use Time;

class SyncList : Collection {
  var data : list(eltType);
  var lock$ : sync bool;

  proc SyncList(type eltType) {
    data = new list(eltType);
  }

  proc add(elts : eltType ... ?nElts) : bool {
    on this {
      lock$ = true;
      for elt in elts do data.push_back(elt);
      lock$;
    }
  }

  proc remove() : (bool, eltType) {
    var (hasElem, elem) : (bool, eltType);
    on this {
      lock$ = true;
      if data.length {
        hasElem = true;
        elem = data.pop_front();
      }
      lock$;
    }
    return (hasElem, elem);
  }
}
