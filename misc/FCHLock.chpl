use GDT;
use LocalAtomicObject;
use ReplicatedDist;

/*
  The Flat-Combining Hierarichal Lock
*/

class FCHFunctor {
  type dataType;

  proc this(ref data : dataType) {
    halt("Bad Functor (by Ref)...");
  }

  proc this(data : dataType) where isClass(dataType) {
    halt("Bad Functor...");
  }
}

class FCHLocalNode {
  type dataType;
  var request : FCHFunctor(dataType);
  var wait : atomic bool;
  var completed : bool;
  var next : FCHLocalNode(dataType);
};

class FCHGlobalNode {
  var isCombiner : atomic bool;
  var nextDescr : atomic uint;
}

class FCHLock {
  var data;

  var nodeGDT : GDT(FCHGlobalNode) = new GDT(FCHGlobalNode);
  var combinerList : atomic uint;

  // We maintain local wait list that a combiner must serve on it's own node.
  var perLocaleSpace = { 0 .. 0 };
  var perLocaleDomain = perLocaleSpace dmapped Replicated();
  var publicationList : [perLocaleDomain] LocalAtomicObject(FCHLocalNode(data.type));
  var recycledCombinerNode : [perLocaleDomain] FCHGlobalNode;

  /*
    Register ourselves as a potential combiner for our node.
    Returns the node and descriptor needed to advance us.
  */
  proc waitForCombiner() : (FCHGlobalNode, uint) {
    // Create our node and register it.
    var node = recycledCombinerNode[0];
    if node == nil {
      node = new FCHGlobalNode();
      recycledCombinerNode[0] = node;
    }
    node.isCombiner.write(false);

    var descr = nodeGDT.register(node);
    var prevDescr = combinerList.exchange(descr);

    // Someone else is ahead of us, append ourselves and wait...
    if prevDescr != 0 {
      var prevNode = nodeGDT.read(prevDescr);
      prevNode.nextDescr.write(descr);
      node.isCombiner.waitFor(true);
    }

    // We are now the combiner... We need to keep track of our node and descriptor
    // to unregister ourselves later, so return it.
    return (node, descr);
  }

  /*
    Relinquish duty as sole combiner for our node and allow other nodes to have a go.
  */
  proc giveUpCombiner(node, descr) {
    // If we are the only one, then we attempt to set the tail to nil to make it
    // easier for combiners to register later.
    if node.nextDescr.read() == 0 {
      // Fast path: Next task attempting to become the combiner will easily
      // have no problems.
      if combinerList.compareExchangeStrong(descr, 0) {
        // TODO: Cleanup
        nodeGDT.unregister(descr);
        return;
      }

      // At this point, someone has already set themselves as the tail (but has not
      // yet appended themselves) so we must wait until they finish.
      var next : uint;
      while true {
        next = node.nextDescr.read();

        // They've finished... Set them as combiner...
        if next != 0 {
          nodeGDT.read(next).isCombiner.write(true);
          // TODO: Cleanup
          nodeGDT.unregister(descr);
          return;
        }
        chpl_task_yield();
      }
    }
  }


  proc synchronize(request : FCHFunctor(data.type)) {
    // Create our local node that contains our desired request and register ourselves...
    var node = new FCHLocalNode(data.type);
    node.request = request;
    node.wait.write(true);
    var prev = publicationList[0].exchange(node);

    // Not only request in the list?
    if prev != nil {
      // Append to list and wait
      prev.next = node;
      node.wait.waitFor(false);

      // We are served, and hence we are done...
      if node.completed {
        // TODO: Cleanup
        return;
      }
    }

    // We're either the only one in the list or our operation was not marked as
    // 'complete' meaning we become eligible for the combiner thread of our node.
    // Note: This is akin to entering a critical section...
    // at this point we have obtained *global* combiner status.
    var (combinerNode, combinerDescr) = waitForCombiner();
    var tmpNode = node;
    var served = 0;
    const maxServed = here.maxTaskPar;

    while true {
      served = served + 1;

      // Serve...
      tmpNode.request(data);
      tmpNode.completed = true;
      tmpNode.wait.write(false);

      // Check # of requests left... If we have less than 2, we're done.
      if tmpNode.next == nil || tmpNode.next.next == nil || served >= maxServed then break;
      tmpNode = tmpNode.next;
    }

    // Relinquish combiner thread status...
    // Note: This is akin to exiting a critical section...
    giveUpCombiner(combinerNode, combinerDescr);

    // Are we the last node?
    if tmpNode.next == nil {
      // Try to set the tail to nil
      if publicationList[0].compareExchange(tmpNode, nil) {
        // TODO: Cleanup
        return;
      }

      // At this point, someone is in the middle of adding themselves to the list...
      // Spin until they are done...
      while tmpNode.next == nil do chpl_task_yield();
    }

    // We know we have somoene else in the list... set them as combiner...
    tmpNode.next.wait.write(false);
    // TODO: Cleanup
    return;
  }
}

proc main() {

  class MultiplyFunctor : FCHFunctor {
    var mult = 2;
    proc this(ref data : dataType) {
      data = data * mult;
    }
  }

  class PrinterFunctor : FCHFunctor {
    proc this(ref data : dataType) {
      writeln(data);
    }
  }

  var timer = new Timer();

  timer.clear();
  var lock = new FCHLock(data=1);
  timer.start();
  coforall loc in Locales {
      on loc {
        var func = new MultiplyFunctor(int);
        forall i in 1 .. (GDT_NUM_ENTRIES / 2) {
          lock.synchronize(func);
        }
      }
  }
  lock.synchronize(new PrinterFunctor(int));
  timer.stop();
  writeln("FCHLock (Fetch&Multiply) ~ ", timer.elapsed(), " seconds");


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

  class syncCounterWrapper {
    var x : int;
  }
  timer.clear();
  var counterLock$ : sync bool;
  var syncCounter = new syncCounterWrapper(x=1);
  timer.start();
  coforall loc in Locales do on loc do forall i in 1 .. (GDT_NUM_ENTRIES / 2) do {
    counterLock$ = true;
    syncCounter.x = syncCounter.x * 2;
    counterLock$;
  }
  timer.stop();
  writeln("Sync (Fetch&Multiply) ~ ", timer.elapsed(), " seconds");
}
