use GDT;

class DSMFunctor {
  type dataType;

  proc this(ref data : dataType) {
    halt("Bad Functor (by Ref)...");
  }
}

class DSMNode {
  type dataType;
  var request : DSMFunctor(dataType);
  var wait : atomic bool;
  var completed : bool;
  var nextDescr : atomic uint;
  var refCount : atomic uint;
};

class DSMLock {
  var data;

  var nodeGDT : GDT(DSMNode(data.type)) = new GDT(DSMNode(data.type));
  var waitList : atomic uint;

  proc synchronize(request : DSMFunctor(data.type)) {
    // Create our node... can be referenced after we are served by combiner thread,
    // so we must maintain a reference count.
    var myNode = new DSMNode(data.type);
    myNode.request = request;
    myNode.wait.write(true);
    myNode.refCount.write(2);

    // Register and set tail
    var myDescr = nodeGDT.register(myNode);
    var prevDescr = waitList.exchange(myDescr);

    // Not first in list? We need to set ourselves.
    if prevDescr != 0 {
      var prevNode = nodeGDT.read(prevDescr);
      prevNode.nextDescr.write(myDescr);

      // Spin until served or set as combiner...
      myNode.wait.waitFor(false);

      // We are served, hence we are done...
      if myNode.completed {
        // Cleanup if last one out...
        if myNode.refCount.fetchSub(1) == 1 {
          nodeGDT.unregister(myDescr);
        }
        return;
      }
    }

    // We are the only one *or* our operation is not completed, meaning it is our
    // time to serve as the combiner...
    var tmpNode = myNode;
    var tmpDescr = myDescr;
    var served = 0;
    const maxServed = here.maxTaskPar * numLocales;
    while true {
      served = served + 1;

      // Serve...
      tmpNode.request(data);
      tmpNode.completed = true;
      tmpNode.wait.write(false);

      // Check # of requests left...
      var tmpNextDescr = tmpNode.nextDescr.read();
      if tmpNextDescr != 0 {
        // At least 1...
        var tmpNextNode = nodeGDT.read(tmpNextDescr);
        // At least 2, continue serving...
        if tmpNextNode.nextDescr.read() != 0 {
          // Cleanup if last one out...
          // TODO: Defer until after we give up combiner thread status...
          if tmpNode.refCount.fetchSub(1) == 1 {
            nodeGDT.unregister(tmpDescr);
          }
          tmpNode = tmpNextNode;
          tmpDescr = tmpNextDescr;
          continue;
        }
      }
      break;
    }

    // Only one left?
    if tmpNode.nextDescr.read() == 0 {
      // Try to set tail... if we fail, some other task added theirs late...
      if waitList.compareExchangeStrong(tmpDescr, 0) {
        // Cleanup if last one out...
        if tmpNode.refCount.fetchSub(1) == 1 {
          nodeGDT.unregister(tmpDescr);
        }
        return;
      } else {
        while tmpNode.nextDescr.read() == 0 {
          chpl_task_yield();
        }
      }
    }

    nodeGDT.read(tmpNode.nextDescr.read()).wait.write(false);
    tmpNode.nextDescr.write(false);
    return;
  }
}


class MultiplyFunctor : DSMFunctor {
  var mult = 2;
  proc this(ref data : dataType) {
    data = data * mult;
  }
}

class PrinterFunctor : DSMFunctor {
  proc this(ref data : dataType) {
    writeln(data);
  }
}

var timer = new Timer();


timer.clear();
var counter : atomic uint;
counter.write(1);
timer.start();
coforall loc in Locales do on loc do forall i in 1 .. (GDT_NUM_ENTRIES / 2) do {
  while true {
    var count = counter.read();
    if counter.compareExchangeStrong(count, count * 2) then break;
  }
}
timer.stop();
writeln("Atomic (Fetch&Multiply) ~ ", timer.elapsed(), " seconds");


timer.clear();
var syncCounter$ : sync uint = 1;
timer.start();
coforall loc in Locales do on loc do forall i in 1 .. (GDT_NUM_ENTRIES / 2) do {
  var count = syncCounter$;
  syncCounter$ = count * 2;
}
timer.stop();
writeln("Sync (Fetch&Multiply) ~ ", timer.elapsed(), " seconds");

timer.clear();
var lock = new DSMLock(data=1);
timer.start();
coforall loc in Locales do on loc do forall i in 1 .. (GDT_NUM_ENTRIES / 2) do lock.synchronize(new MultiplyFunctor(int));
lock.synchronize(new PrinterFunctor(int));
timer.stop();
writeln("DSMLock (Fetch&Multiply) ~ ", timer.elapsed(), " seconds");
