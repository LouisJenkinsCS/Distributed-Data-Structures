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
    var node = new SyncNode(eltType, elt);
    tailLock$ = true;
    tail.next = node;
    tail = node;
    tailLock$;
  }

  proc dequeue() : (bool, eltType) {
    var elt : eltType;
    headLock$ = true;
    var node = head;
    var newHead = head.next;

    // Empty
    if newHead == nil {
      headLock$;
      return (false, _defaultOf(eltType));
    }

    // Grab and clean up
    elt = newHead.elt;
    head = newHead;
    delete node;
    headLock$;
    return (true, elt);
  }
}


config const nElementForSyncQueue = 1000000;
proc main() {
  /*writeln("Starting SyncQueue Proof-Of-Correctness Test ~ nElementForSyncQueue=", nElementForSyncQueue);
  var queue = new SyncQueue(int);

  for i in 1 .. nElementForSyncQueue {
    queue.enqueue(i);
  }

  for i in 1 .. nElementForSyncQueue {
    var retval = queue.dequeue();
    if retval[2] != i {
      writeln("BAD RESULT! Expected ", i, ", Received ", retval);
      return;
    }
  }

  writeln("PASSED!");*/

  var nJitter = 0;
  var nComputations = 0;
  var nElements = 1000000;
  var nTrials = 8;
  var enqueueTrialTime : [1 .. nTrials] real;

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
    enqueueTrialTime[i] = nElements / timer.elapsed();
    writeln(i, "/", nTrials, ": ", (+ reduce enqueueTrialTime) / i);
    timer.clear();
    delete queue;
  }
}
