use Queue;
use Time;
use Random;

class SyncNode {
  type eltType;
  var elt : eltType;
  var next : SyncNode(eltType);
}

class SyncQueue : Queue {
  var head : SyncNode(eltType);
  var headLock$ : sync bool;
  var tail : SyncNode(eltType);
  var tailLock$ : sync bool;


  proc SyncQueue(type eltType) {
    var dummy = new SyncNode(eltType);
    head = dummy;
    tail = dummy;
  }

  proc enqueue(elt : eltType) {
    on this {
      var node = new SyncNode(eltType, elt);
      tailLock$ = true;
      tail.next = node;
      tail = node;
      tailLock$;
    }
  }

  proc dequeue() : (bool, eltType) {
    var retval : (bool, eltType);
    on this {
      var elt : eltType;
      headLock$ = true;
      var node = head;
      var newHead = head.next;

      // Empty
      if newHead == nil {
        headLock$;
        retval = (false, _defaultOf(eltType));
      } else {
        // Grab and clean up
        elt = newHead.elt;
        head = newHead;
        delete node;
        headLock$;
        retval = (true, elt);
      }
    }

    return retval;
  }

}


proc main() {
  var nJitter = 0;
  var nComputations = 0;
  var nElements = 1000000;
  var nTrials = 8;
  var enqueueTrialTime : [1 .. nTrials] real;
  var dequeueTrialTime : [1 .. nTrials] real;

  // Obtain average time for enqueue followed by dequeued...
  for i in 1 .. nTrials {
    var queue = new SyncQueue(int);
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
    enqueueTrialTime[i] = (nElements * numLocales) / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce enqueueTrialTime) / i);
    timer.clear();
    timer.start();

    coforall loc in Locales do on loc {
      var iterations = nElements;

      coforall tid in 0 .. #here.maxTaskPar {
        var x : atomic int;
        var randStr = makeRandomStream(int);
        for j in 1 .. iterations / here.maxTaskPar {
          var retval = queue.dequeue();
          var nComps = nComputations + (if nJitter then (randStr.getNext() % nJitter) else 0);
          for i in 1 .. nComps {
            // Hopefully compiler doesn't throw away?
            x.write(sin(i) : int);
          }
        }
      }
    }

    timer.stop();
    dequeueTrialTime[i] = (nElements * numLocales) / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce dequeueTrialTime) / i);

    delete queue;
  }
}
