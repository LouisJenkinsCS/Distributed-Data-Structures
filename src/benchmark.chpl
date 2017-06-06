config var nElements = 128 * 1024;
config var nTrials = 10;
config var step = 1;

use IO;
use Distributed_FIFO;
use Time;

proc main() {

  // Enqueue
  var file = open("tmp/enqueue" + numLocales, iomode.cw);
  var writer = file.writer();

  var trialTime : [1 .. numLocales, 1 .. nTrials] real;
  // Obtain average time for enqueue...
  for i in 1 .. nTrials {
    var queue = new Distributed_FIFO(int);
    coforall loc in Locales {
      on loc {
        var timer = new Timer();
        timer.start();
        forall j in 1 .. nElements {
          queue.enqueue(j);
        }
        timer.stop();
        trialTime(here.id + 1, i) = nElements / timer.elapsed();
      }
    }
  }
  var total : uint;
  for (i, j) in trialTime.domain {
    total = total + (trialTime(i,j) : uint);
  }
  writer.write(total / (trialTime.size : uint));
  writer.close();
/*
  // Dequeue
  // Open file
  file = open("tmp/dequeue" + numLocales, iomode.cw);
  writer = file.writer();

  // Obtain average time for enqueue...
  for i in 1 .. nTrials {
    var queue = new Distributed_FIFO(int);
    var timer = new Timer();
    forall j in 1 .. nElements {
      queue.enqueue(j);
    }
    timer.start();
    forall j in 1 .. nElements {
      queue.dequeue();
    }
    timer.stop();
    trialTime[i] = nElements / timer.elapsed();
  }
  writer.write((+ reduce trialTime) / nTrials);
  writer.close();*/
}
