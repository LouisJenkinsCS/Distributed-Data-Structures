module CCQueue {

  use Queue;
  use Random;
  use Time;
  use LocalAtomicObject;

  class CCSynchNode {
    type eltType;

    // Used for return value if dequeue, or element to be added if enqueue
    var elt : eltType;
    // For dequeue only, indicates return status: 0 -> empty, 1 -> found...
    var status : int;

    // If wait is false, we spin
    // If wait is true, but completed is false, we are the new combiner thread
    // If wait is true and completed is true, we are done and can exit
    var wait : atomic bool;
    var completed : bool;

    // Next in the waitlist
    var next : CCSynchNode(eltType);
  }

  class QueueNode {
    type eltType;
    var elt : eltType;
    var next : QueueNode(eltType);
  }

  class CCQueue : Queue {
    var maxRequests = here.maxTaskPar;

    var head : QueueNode(eltType);
    var headWaitList : LocalAtomicObject(CCSynchNode(eltType));
    var tail : QueueNode(eltType);
    var tailWaitList : LocalAtomicObject(CCSynchNode(eltType));

    proc CCQueue(type eltType) {
      // Create a dummy node...
      var n = new QueueNode(eltType);
      head = n;
      tail = n;

      // Construct CCSynch wait list...
      headWaitList.write(new CCSynchNode(eltType));
      tailWaitList.write(new CCSynchNode(eltType));
    }

    proc enqueue(elt : eltType) {
      on this do doEnqueue(elt);
    }

    proc doEnqueue(elt : eltType) {
      var counter = 0;
      var nextNode = new CCSynchNode(eltType);
      nextNode.wait.write(true);
      nextNode.completed = false;

      // Register our dummy node so that the next task can add theirs safely,
      // then fill out the node we assigned to use
      var currNode = tailWaitList.exchange(nextNode);
      currNode.elt = elt;
      currNode.next = nextNode;

      // Spin until we are finished...
      currNode.wait.waitFor(false);

      // If our operation is marked complete, we may safely reclaim it, as it is no
      // longer being touched by the combiner thread
      if currNode.completed {
        delete currNode;
        return;
      }

      // If we are not marked as complete, we *are* the combiner thread
      var tmpNode = currNode;
      var tmpNodeNext : CCSynchNode(eltType);

      while (tmpNode.next != nil && counter < maxRequests) {
        counter = counter + 1;
        // Note: Ensures that we do not touch the current node after it is freed
        // by the owning thread...
        tmpNodeNext = tmpNode.next;

        // Process...
        var node = new QueueNode(eltType, elt);
        tail.next = node;
        tail = node;

        // We are done with this one... Note that this uses an acquire barrier so
        // that the owning task sees it as completed before wait is no longer true.
        tmpNode.completed = true;
        tmpNode.wait.write(false);

        tmpNode = tmpNodeNext;
      }

      // At this point, it means one thing: Either we are on the dummy node, on which
      // case nothing happens, or we exceeded the number of requests we can do at once,
      // meaning we wake up the next thread as the combiner.
      tmpNode.wait.write(false);
      delete currNode;
    }

    proc dequeue () : (bool, eltType) {
      var retval : (bool, eltType);
      on this do retval = doDequeue();
      return retval;
    }

    proc doDequeue () : (bool, eltType) {
      var counter = 0;
      var nextNode = new CCSynchNode(eltType);
      nextNode.wait.write(true);
      nextNode.completed = false;

      // Register our dummy node so that the next task can add theirs safely,
      // then fill out the node we assigned to use
      var currNode = headWaitList.exchange(nextNode);
      currNode.next = nextNode;

      // Spin until we are finished...
      currNode.wait.waitFor(false);

      // If our operation is marked complete, we may safely reclaim it, as it is no
      // longer being touched by the combiner thread
      if currNode.completed {
        var (present, elt) = (currNode.status == 1, currNode.elt);
        delete currNode;
        return (present, elt);
      }

      // If we are not marked as complete, we *are* the combiner thread
      var tmpNode = currNode;
      var tmpNodeNext : CCSynchNode(eltType);

      while (tmpNode.next != nil && counter < maxRequests) {
        counter = counter + 1;
        // Note: Ensures that we do not touch the current node after it is freed
        // by the owning thread...
        tmpNodeNext = tmpNode.next;

        // Process...
        var node = head;
        var newHead = head.next;

        // Has some item
        if newHead != nil {
          // Grab and clean up
          tmpNode.elt = newHead.elt;
          tmpNode.status = 1;
          head = newHead;
          delete node;
        }

        // We are done with this one... Note that this uses an acquire barrier so
        // that the owning task sees it as completed before wait is no longer true.
        tmpNode.completed = true;
        tmpNode.wait.write(false);

        tmpNode = tmpNodeNext;
      }

      // At this point, it means one thing: Either we are on the dummy node, on which
      // case nothing happens, or we exceeded the number of requests we can do at once,
      // meaning we wake up the next thread as the combiner.
      tmpNode.wait.write(false);
      var (present, elt) = (currNode.status == 1, currNode.elt);
      delete currNode;
      return (present, elt);
    }
  }

  config const nElementForCCQueue = 1000000;
  proc main() {
    /*writeln("Starting CCQueue Proof-Of-Correctness Test ~ nElementForCCQueue=", nElementForCCQueue);
    var queue = new CCQueue(int);

    for i in 1 .. nElementForCCQueue {
      queue.enqueue(i);
    }

    for i in 1 .. nElementForCCQueue {
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
      var queue = new CCQueue(int);
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
}
