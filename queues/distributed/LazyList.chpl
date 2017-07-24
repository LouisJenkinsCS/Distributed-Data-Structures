use GlobalAtomicObject;
use Queue;
use Time;
use Random;

/*
  A prototype for a global list that makes use of global atomics by allowing enqueue
  to be effectively wait-free but 'lazy' in that, while it remains in the correct order,
  a node will not show up until it or it's predecessor finishes registering their own.
  A node is already visible will always be visible, but any 'new' ones are in a transient
  state. Dequeue would require a Compare-And-Swap strategy which will not scale, and hence
  forth uses Flat Combination to allow mutual exclusion as necessary while remaining relatively
  scalable.

  Note as well, this list provides next to no guarantees even for sequential operation; you can
  add an element to the list and then poll it for it to come back empty because a predecessor
  did not finish. The usefulness of this list is limited, but may be useful when you know
  when the list should and should not be empty.
*/

class LazyListNode {
  type eltType;
  var elt : eltType;
  var fence : atomic uint;
  var next : LazyListNode(eltType);
}

class LazyList : Queue {
  var head : GlobalAtomicObject(LazyListNode(eltType));
  var tail : GlobalAtomicObject(LazyListNode(eltType));

  proc enqueue(elt : eltType) {
    var node = new LazyListNode(eltType, elt);
    var prev = tail.exchange(node);
    if prev == nil {
      head.write(node);
    } else {
      prev.next = node;
      prev.fence.fetchAdd(1);
    }
  }


  proc dequeue() : (bool, eltType) {
      halt("Requires a Flat Combination Strategy...");
  }
}


proc main() {
  var nJitter = 0;
  var nComputations = 0;
  var nElements = 1000000;
  var nTrials = 8;
  var enqueueTrialTime : [1 .. nTrials] real;

  // Obtain average time for enqueue followed by dequeued...
  for i in 1 .. nTrials {
    var queue = new LazyList(int);
    // We only use one or the other, but we must declare both.
    // TODO: Have both implement some parent 'Queue' class/interface?
    var timer = new Timer();
    timer.start();

    coforall loc in Locales do on loc {
      var iterations = nElements;

      coforall tid in 0 .. #here.maxTaskPar {
        var x : atomic int;
        var randStr = makeRandomStream(int);
        for j in 1 .. iterations / here.maxTaskPar {
          queue.enqueue(j);
          var nComps = nComputations + (if nJitter then (randStr.getNext() % nJitter) else 0);
          for i in 1 .. nComps {
            // Hopefully compiler doesn't throw away?
            x.write(sin(i) : int);
          }
        }
      }
    }

    timer.stop();
    enqueueTrialTime[i] = nElements / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce enqueueTrialTime) / i);
    timer.clear();
    delete queue;
  }
}
