use Time;

class B {
  var N : int;
  // (Days, Hours, Minutes, Seconds, Milliseconds, Microseconds)
  var benchTime : 6 * int;
  var benchFunc : func(B, void);
  var timer : Timer;

  inline proc nanoseconds {
    var ns : int(64);

    // Days
    ns = benchTime[1] * 86400000000000;
    // Hours
    ns = ns + benchTime[2] * 3600000000000;
    // Minutes
    ns = ns + benchTime[3] * 60000000000;
    // Seconds
    ns = ns + benchTime[4] * 1000000000;
    // Milliseconds
    ns = ns + benchTime[5] * 1000000;
    // Microseconds
    ns = ns + benchTime[6] * 1000;

    return ns;
  }

  proc run() {
    var n = 1;
    while n < 1e9 {
      writeln("N=", n);
      N = n;
      timer.clear();
      timer.start();
      benchFunc(this);
      timer.stop();

      if (timer.elapsed(TimeUnits.microseconds) * 1000) >= nanoseconds {
        writeln("Finished in ", timer.elapsed(), " seconds");
        writeln("Ns/Op: ", (timer.elapsed(TimeUnits.microseconds) * 1000) / N);
        writeln("Ops/Sec: ", N / ((timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9));
        return;
      }

      n = n * 2;
    }
  }
}
