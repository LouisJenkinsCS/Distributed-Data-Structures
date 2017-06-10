use cclock;

class node {
  type eltType;
  var elt : eltType;
  var next : node(eltType);
}

class enqueue_request {
  type eltType;
  var data : eltType;
}

class dequeue_request {
  type eltType;
}

class dequeue_response {
  type eltType;
  var success : bool;
  var elt : eltType;
}

class ccqueue {
  type eltType;
  var head : node(eltType);
  var hlock : cclock;
  var tail : node(eltType);
  var tlock : cclock;

  proc ccqueue(type eltType) {
    // Create and register our locks
    var enqueue_dispatch = lambda (thiz : object, request : object) {
      var requestObject = request : enqueue_request(eltType);
      type typ = requestObject.eltType;
      var thizQueue = thiz : ccqueue(typ);
      var n = new node(typ);

      n.elt = requestObject.data : typ;
      thizQueue.tail.next = n;
      thizQueue.tail = n;
      return nil : object;
    };
    var dequeue_dispatch = lambda (thiz : object, request : object) {
      var requestObject = request : dequeue_request(eltType);
      type typ = requestObject.eltType;
      var thizQueue = thiz : ccqueue(typ);
      var node = thizQueue.head;
      var next = node.next;

      if next == nil then return new dequeue_response(eltType, false) : object;
      var retval = next.elt;
      thizQueue.head = next;
      delete node;
      return new dequeue_response(eltType, true, retval) : object;
    };
    this.hlock = new cclock(this, dequeue_dispatch);
    this.hlock.initializer(this, dequeue_dispatch);
    this.tlock = new cclock(this, enqueue_dispatch);
    this.tlock.initializer(this, enqueue_dispatch);

    // Create a dummy node...
    var n = new node(eltType);
    head = n;
    tail = n;
  }

  proc enqueue(elt : eltType) {
    var request = new enqueue_request(eltType, elt);
    tlock.ccsync(request);
    delete request;
  }

  proc dequeue () : (bool, eltType) {
    var request = new dequeue_request(eltType);
    var retval : dequeue_response(eltType) = hlock.ccsync(request) : dequeue_response(eltType);
    delete request;
    return (retval.success, retval.elt);
  }
}

var queue = new ccqueue(int);

for i in 1 .. 100 {
  queue.enqueue(i);
}

for i in 1 .. 100 {
  if queue.dequeue()[2] != i {
    writeln("BAD RESULT!");
    return;
  }
}
