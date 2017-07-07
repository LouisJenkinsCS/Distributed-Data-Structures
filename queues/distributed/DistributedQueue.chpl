use CyclicDist;
use Queue;

config const maxElemsToSteal = 4 * 1024;

class LocalDistQueueNode {
  type eltType;
  var elt : eltType;
  var next : LocalDistQueueNode(eltType);
}

class LocalDistQueue {
  type eltType;

  // Counter is for outside readers
  var head : LocalDistQueueNode(eltType);
  var headCounter$ : sync int = _defaultOf(int);

  // Counter is for outside readers
  var tail : LocalDistQueueNode(eltType);
  var tailCounter$ : sync int = _defaultOf(int);

  // Ensures we do not deadlock while trying to steal work...
  var isWorkStealing : atomic bool;

  proc LocalDistQueue(type eltType) {
    var dummy = new LocalDistQueueNode(eltType);
    head = dummy;
    tail = dummy;
  }
}

class DistributedQueue : Queue {
  var logWorkStealing : bool;

  // per-locale descriptors
  var localQueueSpace = {0 .. numLocales-1};
  var localQueueDom = localQueueSpace dmapped Cyclic(startIdx=localQueueSpace.low);
  var localQueues : [localQueueDom] LocalDistQueue(eltType);

  inline proc getLocalQueueIndex() {
    return localQueues.domain.localSubdomain().first;
  }

  // TODO: Need to accept custom locales...
  proc DistributedQueue(type eltType) {
    // Create our descriptors
    // forall
    coforall loc in Locales do
      on loc {
        /*writeln("Locale #", here.id, ": Assigned index: ", getLocalQueueIndex());*/
        localQueues[getLocalQueueIndex()] = new LocalDistQueue(eltType);
      }
  }

  proc enqueue(elt : eltType) {
    var queue = localQueues[getLocalQueueIndex()];
    var node = new LocalDistQueueNode(eltType, elt);
    var _tailCount = queue.tailCounter$;
    queue.tail.next = node;
    queue.tail = node;
    queue.tailCounter$ = _tailCount + 1;
  }

  proc dequeue() : (bool, eltType) {
    var queue = localQueues[getLocalQueueIndex()];
    var elt : eltType;
    var _headCount = queue.headCounter$;
    var node = queue.head;
    var newHead = queue.head.next;

    // Empty
    if newHead == nil {
      if logWorkStealing then writeln(here, ": Empty... Head: ", queue.headCounter$.readXX(), ", Tail: ", queue.tailCounter$.readXX());
      queue.isWorkStealing.write(true);

      // Steal work... Allocate some space to store work we steal..
      var workStolenSpace = {0..0};
      workStolenSpace.clear();
      var workSteal$ : sync bool;
      var workStolen : [workStolenSpace] eltType;

      // This is a coforall because it is imperative that we spawn a task for each
      // as it is mainly blocking.
      coforall loc in Locales {
        var dom = {0..0};
        dom.clear();
        var work : [dom] eltType;
        if loc != here then
        on loc {
          var theirQueue = localQueues[getLocalQueueIndex()];
          var nElems = theirQueue.tailCounter$.readXX() - theirQueue.headCounter$.readXX();

          // They have some elements at this time. It should be noted that even if
          // the queue is empty after our read of both counters, then by the time they
          // attempt to steal from us, they will see we are empty and skip us, avoiding deadlock.
          var isBusy = theirQueue.isWorkStealing.read();
          if isBusy then writeln(here, " -> ", dom.locale, ": isBusy with", nElems);
          if nElems > 0 && !isBusy {
            // Get the actual number of elements...
            var _theirHeadCount = theirQueue.headCounter$;
            nElems = theirQueue.tailCounter$.readXX() - _theirHeadCount;
            if nElems {
              const toSteal = min(4 * 1024, max(1, nElems * 0.25) : int);
              var amountStolen = 0;
              var theirHead = theirQueue.head;
              var localDom = { 1 .. toSteal };
              var localWork : [localDom] eltType;

              // Steal elements...
              for idx in localDom {
                var theirNewHead = theirQueue.head.next;
                localWork[idx] = theirNewHead.elt;
                delete theirQueue.head;
                theirQueue.head = theirNewHead;
              }

              // Release lock and writeback number of elements stolen...
              theirQueue.headCounter$ = _theirHeadCount + toSteal;
              if logWorkStealing then writeln("(", here, ":", nElems - toSteal, " -> ", dom.locale, ":", toSteal, ")");
              dom = localDom;
              work = localWork;
            } else {
              theirQueue.headCounter$ = _theirHeadCount;
            }
          }
        }

        // Merge our work...
        workSteal$ = true;
        for w in work do workStolen.push_back(w);
        workSteal$;
      }

      // We have the work we need... take the first one and add the rest...
      var hasElt : bool;
      if !workStolen.isEmpty() {
        elt = workStolen[workStolen.domain.first];
        workStolen.pop_front();
        hasElt = true;
      }

      if !workStolen.isEmpty() {
        var _tailCount = queue.tailCounter$;
        while !workStolen.isEmpty() {
          var node = new LocalDistQueueNode(eltType, workStolen[workStolen.domain.first]);
          workStolen.pop_front();
          queue.tail.next = node;
          queue.tail = node;
          _tailCount = _tailCount + 1;
        }
        queue.tailCounter$ = _tailCount;
      }

      queue.isWorkStealing.write(false);
      queue.headCounter$ = _headCount;



      // Is Empty?
      return (hasElt, elt);
    }

    // Grab and clean up
    elt = newHead.elt;
    queue.head = newHead;
    delete node;
    queue.headCounter$ = _headCount + 1;
    return (true, elt);
  }
}

config const nElementsForMPMC = 1000000;

// Simple proof of correctness test - Self Contained
proc main() {
  writeln("Starting MPMCQueue Proof of Correctness (Work Depletion) Test ~ nElementsForMPMC: ", nElementsForMPMC);

  var queue = new DistributedQueue(int);
  var counter : atomic int;
  var expected = (nElementsForMPMC * (nElementsForMPMC + 1)) / 2;

  forall i in 1 .. nElementsForMPMC {
    queue.enqueue(i);
  }

  coforall loc in Locales do on loc {
    var localeLocalCounter : atomic int;
    coforall tid in 0 .. #here.maxTaskPar {
      var taskLocalCounter : int;
      while true {
        var (present, elem) = queue.dequeue();
        if !present {
          break;
        }

        taskLocalCounter = taskLocalCounter + elem;
      }
      localeLocalCounter.add(taskLocalCounter);
    }
    writeln(here, ": Counter=", localeLocalCounter.read());
    counter.add(localeLocalCounter.read());
  }

  if counter.read() == expected {
    writeln("PASSED TEST!");
  } else {
    writeln("FAILED TEST! Expected: ", expected, ", but received: ", counter.read());
  }

}
