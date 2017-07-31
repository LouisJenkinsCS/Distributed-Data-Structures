use Benchmark;
use Plot;
use BlockDist;
use CyclicDist;

var nLocales : int;
config param isWeakScaling = false;

proc bdBenchmark(b : B) {
  var targetLocDom = {0..#nLocales};
  var targetLocales : [targetLocDom] locale;
  for idx in targetLocDom do targetLocales[idx] = Locales[idx];
  var nElems = (if isWeakScaling then b.N * nLocales else b.N);

  var space = {1..nElems};
  var dom = space dmapped Block(boundingBox=space, targetLocales=targetLocales);
  var arr : [dom] int;

  const nPerLoc = b.N / nLocales;
  const nPerTask = if isWeakScaling then b.N / here.maxTaskPar else nPerLoc / here.maxTaskPar;

  b.timer.clear();
  coforall loc in targetLocales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nPerTask {
        arr[i] = i;
      }
    }
  }
}

proc cdBenchmark(b : B) {
  var targetLocDom = {0..#nLocales};
  var targetLocales : [targetLocDom] locale;
  for idx in targetLocDom do targetLocales[idx] = Locales[idx];
  var nElems = (if isWeakScaling then b.N * nLocales else b.N);

  var space = {1..nElems};
  var dom = space dmapped Cyclic(startIdx=space.low, targetLocales=targetLocales);
  var arr : [dom] int;

  const nPerLoc = b.N / nLocales;
  const nPerTask = if isWeakScaling then b.N / here.maxTaskPar else nPerLoc / here.maxTaskPar;

  b.timer.clear();
  coforall loc in targetLocales do on loc {
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nPerTask {
        arr[i] = i;
      }
    }
  }
}

proc main() {
  var plotter : Plotter(int, real);
  nLocales = 1;
  var lastIter = false;

  // BlockDist - Benchmark
  if numLocales == 1 then lastIter = true;
  while nLocales <= numLocales {
    var b = new B();
    b.benchTime = (0,0,0,5,0,0);
    b.benchFunc = bdBenchmark;
    b.run();
    var nElems = if isWeakScaling then b.N * nLocales else b.N;
    plotter.add("BlockDist", nLocales, nElems / ((b.timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9));

    if lastIter then break;
    nLocales = min(numLocales, nLocales * 2);
    if nLocales == numLocales then lastIter = true;
  }

  nLocales = 1;
  lastIter = false;

  // CyclicDist - Benchmark
  if numLocales == 1 then lastIter = true;
  while nLocales <= numLocales {
    var b = new B();
    b.benchTime = (0,0,0,5,0,0);
    b.benchFunc = cdBenchmark;
    b.run();
    var nElems = if isWeakScaling then b.N * nLocales else b.N;
    plotter.add("CyclicDist", nLocales, nElems / ((b.timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9));

    if lastIter then break;
    nLocales = min(numLocales, nLocales * 2);
    if nLocales == numLocales then lastIter = true;
  }

  plotter.plot("BlockVsCyclicDist");
}
