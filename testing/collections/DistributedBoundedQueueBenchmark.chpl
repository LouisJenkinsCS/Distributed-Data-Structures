use DistributedBoundedQueue;
use SynchronizedList;
use Benchmark;
use Plot;

var nLocales : int;

config param isWeakScaling = false;

proc dbqBench(b : B) {
  var targetLocDom = {0..#nLocales};
  var targetLocales : [targetLocDom] locale;
  for idx in targetLocDom do targetLocales[idx] = Locales[idx];
  var cap = (if isWeakScaling then b.N * nLocales else b.N);

  var q = new DistributedBoundedQueue(int, cap=cap, targetLocDom=targetLocDom, targetLocales=targetLocales);
  const nPerLoc = b.N / nLocales;
  const nPerTask = if isWeakScaling then b.N / here.maxTaskPar else nPerLoc / here.maxTaskPar;

  b.timer.clear();
  coforall loc in targetLocales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nPerTask {
        q.add(i);
      }
    }
  }

  b.timer.stop();
  delete q;
  b.timer.start();
}

proc slBench(b : B) {
  var targetLocDom = {0..#nLocales};
  var targetLocales : [targetLocDom] locale;
  for idx in targetLocDom do targetLocales[idx] = Locales[idx];

  var q = new SynchronizedList(int);
  const nPerLoc = b.N / nLocales;
  const nPerTask = if isWeakScaling then b.N / here.maxTaskPar else nPerLoc / here.maxTaskPar;

  b.timer.clear();
  coforall loc in targetLocales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nPerTask {
        q.add(i);
      }
    }
  }

  b.timer.stop();
  delete q;
  b.timer.start();
}

proc main() {
  var plotter : Plotter(int, real);
  nLocales = 1;
  var lastIter = false;

  // DistributedBoundedQueue - Benchmark
  if numLocales == 1 then lastIter = true;
  while nLocales <= numLocales {
    var b = new B();
    b.benchTime = (0,0,0,5,0,0);
    b.benchFunc = dbqBench;
    b.run();
    var nElems = if isWeakScaling then b.N * nLocales else b.N;
    plotter.add("DistributedBoundedQueue - Enqueue", nLocales, nElems / ((b.timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9));

    if lastIter then break;
    nLocales = min(numLocales, nLocales * 2);
    if nLocales == numLocales then lastIter = true;
  }

  lastIter = false;
  nLocales = 1;
  
  // SyncList - Benchmark
  if numLocales == 1 then lastIter = true;
  while nLocales <= numLocales {
    var b = new B();
    b.benchTime = (0,0,0,5,0,0);
    b.benchFunc = slBench;
    b.run();
    var nElems = if isWeakScaling then b.N * nLocales else b.N;
    plotter.add("SynchronizedList - Enqueue", nLocales, nElems / ((b.timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9));

    if lastIter then break;
    nLocales = min(numLocales, nLocales * 2);
    if nLocales == numLocales then lastIter = true;
  }

  plotter.plot("DistributedBoundedQueueVsSynchronizedList");
}
