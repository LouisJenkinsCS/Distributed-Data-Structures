/*
  Base class for data structures.
*/
class Collection {
  type eltType;

  /*
    Adds an element to this data structure.
  */
  proc add(elts : eltType ... ?nElts) : bool {halt();}
  /*
    Add all elements from another collection to this.
  */
  proc add(otherCollection : Collection(eltType)) : bool {halt();}
  /*
    Add all elements in the array.
  */
  proc add(elts : [?nElts] eltType) : bool {halt();}
  /*
    Removes an arbitrary element from this data structure.
  */
  proc remove() : (bool, eltType) {halt();}
  /*
    Removes up to `nElems` elements into a separate collection.
  */
  proc remove(nElems : int) : Collection(eltType) {halt();}
  /*
    Removes an item from the data structure (if it exists).
  */
  proc removeItem(elt : eltType) : bool {halt();}
  /*
    Check if the element exists in this data structure.
  */
  proc contains(elt : eltType) : bool {halt();}
  /*
    Clears all elements from this data structure.
  */
  proc clear() {halt();}
  /*
    Check if this data structure is empty.
  */
  proc isEmpty : bool {halt();}
  /*
    Obtain the number of elements contained in this data structure.
  */
  proc size : int {halt();}
  /*
    Iterate over all elements in the data structure.
  */
  iter these() : eltType {halt();}
}

module Stack {
  /*
    A Last-In-First-Out data structure. Classes inheriting from this class must
    override the `add` to push elements in Last-In-First-Out order, and `remove`
    to pop elements in Last-In-First-Out order.
  */
  class Stack : Collection {}

  /*
    A stack with a static capacity.
  */
  class BoundedStack : Stack {
    proc capacity : int {halt();}
  }

  /*
    A stack with a dynamic capacity.
  */
  class DynamicBoundedStack : BoundedStack {
    proc resize(newSize : int) : bool {halt();}
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
    proc enqueue(data) : bool {
      return this.add(data);
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
      return this.dequeue(nElems);
    }
  }

  /*
    A queue with a static capacity.
  */
  class BoundedQueue : Queue {
    proc capacity : int {halt();}
  }

  /*
    A queue with a dynamic capacity.
  */
  class DynamicBoundedQueue : BoundedQueue {
    proc resize(newSize : int) : bool {halt();}
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
    proc get(idx : int) : (bool, eltType) {halt();}
    /*
      Obtains the index of the requested element, if present in the list.
    */
    proc indexOf(elt : eltType) : int {halt();}
    /*
      Add an element at a specific index in the list.
    */
    proc add(idx : int, elt : eltType) : bool {halt();}
    /*
      Creates a new list containing the items at the specified indexes. If `end`
      is less than `start`, then the end indice is set to the end of the list.
      If the `end` is greater than the size of the list, it will also be set
      to the end of the list.
    */
    proc subList(start : int, end : int = -1) : IndexableList(eltType) {halt();}
  }

  /*
    A data structure with a static capacity.
  */
  class BoundedList : List {
    proc capacity : int {halt();}
  }

  /*
    A data structure with a dynamic capacity.
  */
  class DynamicBoundedList : BoundedList {
    proc resize(newSize : int) : bool {halt();}
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
