config var nElements = 1024;
config var nTrials = 4;
config var step = 1;

use IO;
use Distributed_FIFO;
use Time;

proc main() {

  // Open file
  var file = open("enqueue.csv", iomode.cw);
  var writer = file.writer();

  // Write the header
  writer.write("NumLocales");
  for i in 1 .. numLocales by step {
    writer.write(",", i);
  }
  writer.writeln();

  // Write the body
  writer.write("Op/Sec");
  for i in 1 .. numLocales by step {
    var trialTime : [1 .. nTrials] real;
    // Obtain average time for enqueue...
    for j in 1 .. nTrials {
      var queue = new Distributed_FIFO(int, i);
      var timer = new Timer();
      timer.start();
      forall i in 1 .. nElements {
        queue.enqueue(i);
      }
      timer.stop();
      trialTime[j] = nElements / timer.elapsed();
    }

    writer.write(",", (+ reduce trialTime) / nTrials);
  }
  writer.writeln();
  writer.close();

  // Do the same for dequeue...

  // Open file
  file = open("dequeue.csv", iomode.cw);
  writer = file.writer();

  // Write the header
  writer.write("NumLocales");
  for i in 1 .. numLocales by step {
    writer.write(",", i);
  }
  writer.writeln();

  // Write the body
  writer.write("Op/Sec");
  for i in 1 .. numLocales by step {
    var trialTime : [1 .. nTrials] real;
    // Obtain average time for dequeue...
    // TODO: Incorporate this with what I have above!
    for j in 1 .. nTrials {
      var queue = new Distributed_FIFO(int, i);
      var timer = new Timer();

      // Add all items first
      forall i in 1 .. nElements {
        queue.enqueue(i);
      }
      timer.start();
      // Then remove them...
      forall i in 1 .. nElements {
        queue.dequeue();
      }
      timer.stop();
      trialTime[j] = nElements / timer.elapsed();
    }

    writer.write(",", (+ reduce trialTime) / nTrials);
  }
  writer.writeln();
  writer.close();
}
