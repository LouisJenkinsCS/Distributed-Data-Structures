use GlobalAtomicObject;
use Time;

/*
  TODO: Test GlobalAtomicObject vs Sync vs Atomics (on 64-bit value) [As Baseline]
    1) Read
    2) Write
    3) CompareExchange

  Note: Need to test with remote data as worst-case as well as local for average case
*/

config const nOpsPerLocale = 1000000;

class Foo { var bar : int; }

proc syncOp() {
  var lock$ : sync bool;
  var foo = new Foo();
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nOpsPerLocale / here.maxTaskPar {
        lock$ = true;
        foo.bar = i;
        lock$;
      }
    }
  }
  timer.stop();

  return timer.elapsed();
}

proc atomicSingleOp() {
  var atomicValue : atomic uint;
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nOpsPerLocale / here.maxTaskPar {
        atomicValue.write((i : uint));
      }
    }
  }
  timer.stop();

  return timer.elapsed();
}

proc atomicLLSCOp() {
  var atomicValue : atomic uint;
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nOpsPerLocale / here.maxTaskPar {
        var x = atomicValue.read();
        atomicValue.compareExchangeStrong(x, x + 1);
      }
    }
  }
  timer.stop();

  return timer.elapsed();
}

proc globalAtomicSingleOp() {
  class AtomicObjWrapper { var obj : GlobalAtomicObject(Foo); }
  var atomicObj = new AtomicObjWrapper();
  atomicObj.obj.write(new Foo());
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    var foo = new Foo();
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nOpsPerLocale / here.maxTaskPar {
        atomicObj.obj.write(foo);
      }
    }
  }
  timer.stop();

  return timer.elapsed();
}

proc globalAtomicLLSCOp() {
  class AtomicObjWrapper { var obj : GlobalAtomicObject(Foo); }
  var atomicObj = new AtomicObjWrapper();
  atomicObj.obj.write(new Foo());
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    var foo = new Foo();
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nOpsPerLocale / here.maxTaskPar {
        var _foo = atomicObj.obj.read();
        atomicObj.obj.compareExchange(_foo, foo);
      }
    }
  }
  timer.stop();

  return timer.elapsed();
}

config const nTrialsForAtomicTest = 1;

proc main() {
  writeln("NumLocales: ", numLocales);
  var times : [{1 .. nTrialsForAtomicTest}] real;
  for i in 1 .. nTrialsForAtomicTest {
    if i == 1 then syncOp();
    times[i] = syncOp();
    writeln("SyncOp Trial ", i, "/", nTrialsForAtomicTest, ": ", times[i]);
  }
  writeln("SyncOp Avg: ", (+ reduce times) / nTrialsForAtomicTest);

  for i in 1 .. nTrialsForAtomicTest {
    if i == 1 then atomicSingleOp();
    times[i] = atomicSingleOp();
    writeln("AtomicSingleOp Trial ", i, "/", nTrialsForAtomicTest, ": ", times[i]);
  }
  writeln("AtomicSingleOp Avg: ", (+ reduce times) / nTrialsForAtomicTest);

  for i in 1 .. nTrialsForAtomicTest {
    if i == 1 then atomicLLSCOp();
    times[i] = atomicLLSCOp();
    writeln("AtomicLLSCOp Trial ", i, "/", nTrialsForAtomicTest, ": ", times[i]);
  }
  writeln("AtomicLLSCOp Avg: ", (+ reduce times) / nTrialsForAtomicTest);

  for i in 1 .. nTrialsForAtomicTest {
    if i == 1 then globalAtomicSingleOp();
    times[i] = globalAtomicSingleOp();
    writeln("GlobalAtomicSingleOp Trial ", i, "/", nTrialsForAtomicTest, ": ", times[i]);
  }
  writeln("GlobalAtomicSingleOp Avg: ", (+ reduce times) / nTrialsForAtomicTest);

  for i in 1 .. nTrialsForAtomicTest {
    if i == 1 then globalAtomicLLSCOp();
    times[i] = globalAtomicLLSCOp();
    writeln("GlobalAtomicLLSCOp Trial ", i, "/", nTrialsForAtomicTest, ": ", times[i]);
  }
  writeln("GlobalAtomicLLSCOp Avg: ", (+ reduce times) / nTrialsForAtomicTest);
}
