use BigInteger;
use FCHLock;
use Time;

class AdderFunctor : FCHFunctor {
  proc this(ref data : dataType) {
    data = data + new bigint(1);
  }
}

config var counterTestElements = 1000000;

proc main() {
  var counter = new bigint(1);
  var lock = new FCHLock(counter);
  var timer = new Timer();
  timer.start();

  coforall loc in Locales do on loc {
    var f = new AdderFunctor(bigint);
    coforall tid in 0 .. #here.maxTaskPar {
      for i in 1 .. counterTestElements {
        lock.synchronize(f);
      }
    }
  }

  timer.stop();
  writeln("FCHLock: ", timer.elapsed(), " seconds");

  class wrapper { var x = new bigint(1); };
  var counterWrapper = new  wrapper();
  var lock$ : sync bool;
  timer.clear();
  timer.start();

  coforall loc in Locales do on loc {
    var f = new AdderFunctor(bigint);
    coforall tid in 0 .. #here.maxTaskPar {
      for i in 1 .. counterTestElements {
        lock$ = true;
        counterWrapper.x += new bigint(1);
        lock$;
      }
    }
  }

  timer.stop();
  writeln("Sync: ", timer.elapsed(), " seconds");
}
