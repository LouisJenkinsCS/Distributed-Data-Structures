/*
  Base class for data structures.
*/
class Collection {
  type eltType;

  /*
    Adds an element to this data structure.
  */
  proc add(elts : eltType ... ?nElts) : bool {
    compilerError("'proc add(elts : eltType ... ?nElts) : bool' is not supported...");
  }
  /*
    Add all elements from another collection to this.
  */
  proc add(otherCollection : Collection(eltType)) : bool {
    compilerError("'proc add(otherCollection : Collection(eltType)) : bool' is not supported...");
  }
  /*
    Add all elements in the array.
  */
  proc add(elts : [?nElts] eltType) : bool {
    compilerError("'proc add(elts : [?nElts] eltType) : bool' is not supported...");
  }
  /*
    Removes an arbitrary element from this data structure.
  */
  proc remove() : (bool, eltType) {
    compilerError("'proc remove() : (bool, eltType)' is not supported...");
  }
  /*
    Removes up to `nElems` elements into a separate collection.
  */
  proc remove(nElems : int) : Collection(eltType) {
    compilerError("'proc remove(nElems : int) : Collection(eltType)' is not supported...");
  }
  /*
    Removes an item from the data structure (if it exists).
  */
  proc removeItem(elt : eltType) : bool {
    compilerError("'proc removeItem(elt : eltType) : bool' is not supported...");
  }
  /*
    Check if the element exists in this data structure.
  */
  proc contains(elt : eltType) : bool {
    compilerError("'proc contains(elt : eltType) : bool' is not supported...");
  }
  /*
    Clears all elements from this data structure.
  */
  proc clear() {
    compilerError("'proc clear()' is not supported...");
  }
  /*
    Check if this data structure is empty.
  */
  proc isEmpty() : bool {
    compilerError("'proc isEmpty() : bool' is not supported...");
  }
  /*
    Obtain the number of elements contained in this data structure.
  */
  proc size() : int {
    compilerError("'proc size() : int' is not supported...");
  }
  /*
    Iterate over all elements in the data structure.
  */
  iter these() : eltType {
    compilerError("'iter these() : eltType' is not supported...");
  }
}

module Stack {
  /*
    A Last-In-First-Out data structure. Classes inheriting from this class must
    override the `add` to push elements in Last-In-First-Out order, and `remove`
    to pop elements in Last-In-First-Out order.
  */
  class Stack : Collection {
    /*
      Syntactic sugar for 'add'
    */
    proc push(data) : bool {
      compilerError("'proc push(data) : bool' is not supported...");
    }
    /*
      Syntactic sugar for 'remove'
    */
    proc pop() : (bool, eltType) {
      return this.remove();
    }
    /*
      Syntactic sugar for 'remove'
    */
    proc pop(nElems : int) : Collection(eltType) {
      return this.remove(nElems);
    }
  }

  /*
    A stack with a static capacity.
  */
  class BoundedStack : Stack {
    proc capacity() : int {
      compilerError("'proc capacity() : int' is not supported...");
    }
  }

  /*
    A stack with a dynamic capacity.
  */
  class DynamicBoundedStack : BoundedStack {
    proc resize(newSize : int) : bool {
      compilerError("'proc resize(newSize : int) : bool' is not supported...");
    }
  }
}

module Queue {
  /*
    A First-In-First-Out data structure. Classes inheriting from this class must
    override the `add` to enqueue elements in First-In-First-Out order, and `remove`
    to dequeue elements in First-In-First-Out order.
  */
  class Queue : Collection {
    /*
      Syntactic sugar for 'add'.
    */
    proc enqueue(elts : eltType ... ?nElts) : bool {
      return this.add((...elts));
    }
    /*
      Syntactic sugar for 'remove'
    */
    proc dequeue() : (bool, eltType) {
      return this.remove();
    }
    /*
      Syntactic sugar for 'remove'
    */
    proc dequeue(nElems : int) : Collection(eltType) {
      return this.remove(nElems);
    }
  }

  /*
    A queue with a static capacity.
  */
  class BoundedQueue : Queue {
    proc capacity() : int {
      compilerError("'proc capacity() : int' is not supported...");
    }
  }

  /*
    A queue with a dynamic capacity.
  */
  class DynamicBoundedQueue : BoundedQueue {
    proc resize(newSize : int) : bool {
      compilerError("'proc resize(newSize : int) : bool' is not supported...");
    }
  }
}

module List {
  /*
    An ordered structure which supports indexing.
  */
  class List : Collection {
    /*
      Obtain the element at the requested index.
    */
    proc get(idx : int) : (bool, eltType) {
      compilerError("'proc get(idx : int) : (bool, eltType)' is not supported...");
    }
    /*
      Obtains the index of the requested element, if present in the list.
    */
    proc indexOf(elt : eltType) : int {
      compilerError("'proc indexOf(elt : eltType) : int' is not supported...");
    }
    /*
      Add an element at a specific index in the list.
    */
    proc add(idx : int, elt : eltType) : bool {
      compilerError("'proc add(idx : int, elt : eltType) : bool' is not supported...");
    }
    /*
      Creates a new list containing the items at the specified indexes. If `end`
      is less than `start`, then the end indice is set to the end of the list.
      If the `end` is greater than the size of the list, it will also be set
      to the end of the list.
    */
    proc subList(start : int, end : int = -1) : List(eltType) {
      compilerError("'proc subList(start : int, end : int = -1) : List(eltType)' is not supported...");
    }
  }

  /*
    A data structure with a static capacity.
  */
  class BoundedList : List {
    proc capacity() : int {
      compilerError("'proc capacity() : int' is not supported...");
    }
  }

  /*
    A data structure with a dynamic capacity.
  */
  class DynamicBoundedList : BoundedList {
    proc resize(newSize : int) : bool {
      compilerError("'proc resize(newSize : int) : bool' is not supported...");
    }
  }
}

// TODO: Operator does not allow return type... trouble?

/*
  Syntactic sugar for 'add'.
*/
proc +=(ref c : Collection(?eltTyp), other) {
  c.add(other);
}

proc +=(ref c : Collection(?eltType), other) where isTuple(other) {
  c.add((...other));
}
