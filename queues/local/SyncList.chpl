use List;
use Queue;
use Random;
use Time;

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

config const nElementForSyncList = 1000000;
proc main() {
  /*writeln("Starting SyncList Proof-Of-Correctness Test ~ nElementForSyncList=", nElementForSyncList);
  var queue = new SyncList(int);

  for i in 1 .. nElementForSyncList {
    queue.enqueue(i);
  }

  for i in 1 .. nElementForSyncList {
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
    var queue = new SyncList(int);
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
