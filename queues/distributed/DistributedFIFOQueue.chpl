use CyclicDist;
use LocalAtomicObject;
use Queue;
use SyncQueue;
use Random;
use ReplicatedDist;

class DistributedFIFOQueue : Queue {

  // Two monotonically increasing counters used in deciding which locale to choose from
  var globalHead : atomic uint;
  var globalTail : atomic uint;

  // per-locale data
  var perLocaleSpace = { 0 .. 0 };
  var perLocaleDomain = perLocaleSpace dmapped Replicated();
  var cyclicLocaleDomain = LocaleSpace dmapped Cyclic(startIdx=LocaleSpace.low);
  var localQueues : [perLocaleDomain] Queue(eltType);
  var queuePromises : [cyclicLocaleDomain] atomic int;

  // TODO: Custom Locales
  proc DistributedFIFOQueue(type eltType) {
    forall loc in Locales {
      on loc {
        localQueues[0] = new SyncQueue(eltType);
      }
    }
  }

  proc getNextTailIndex() : int {
    while true {
      var _head = globalHead.fetchAdd(1);
      var idx = (_head % numLocales : uint) : int;

      if queuePromises[idx].fetchAdd(1) >= 0 {
        return idx;
      }
    }

    halt("Exited while loop without getting head...");
  }

  proc getNextHeadIndex() : int {
    var _tail = globalTail.fetchAdd(1);
    var idx = (_tail % numLocales : uint) : int;

    if queuePromises[idx].fetchSub(1) <= 0 {
      return -1;
    } else {
      return idx;
    }
  }

  proc enqueue(elt : eltType) {
    var idx : int = getNextTailIndex();
    on Locales[idx] {
      localQueues[0].enqueue(elt);
    }
  }

  proc dequeue() : (bool, eltType) {
    var (hasElem, elem) = (true, _defaultOf(eltType));
    var idx = getNextHeadIndex();
    if idx == -1 {
      return (false, _defaultOf(eltType));
    }

    // Now we get our item from the queue
    // Note that at the index given, its possible that an enqueueing task has not
    // finished yet, but we know there *should* be at least something for us, so we can
    // spin until it has what we want.
    on Locales[idx] do {
      var retval : (bool, eltType);
      while !retval[1] {
        retval = localQueues[0].dequeue();

        if (!retval[1]) {
          writeln(here, ": Spinning... HasElem: ", hasElem, ";", "head: ", globalHead.peek(), ", tail: ", globalTail.peek());
          chpl_task_yield();
        }
      }

      (hasElem, elem) = retval;
    }
    return (hasElem, elem);
  }
}

config const nElementsForFIFO = 1000000;
proc main() {
  writeln("Starting FIFOQueue Proof of Correctness Test ~ nElementsForFIFO: ", nElementsForFIFO);
  var queue = new DistributedFIFOQueue(int);
  for i in 1 .. nElementsForFIFO {
    on Locales[i % numLocales] do queue.enqueue(i);
  }

  for i in 1 .. nElementsForFIFO {
    on Locales[i % numLocales] {
      var (hasElem, elem) = queue.dequeue();
      if !hasElem || elem != i {
        halt("FAILED TEST! Expected: ", i, ", Received: ", elem, "; HasElem: ", hasElem);
      }
    }
  }

  writeln("PASSED!");
}
