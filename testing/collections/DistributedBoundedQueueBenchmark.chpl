use DistributedBoundedQueue;
use Benchmark;
use Plot;

var nLocales : int;

proc doWork(b : B) {
  var targetLocDom = {0..#nLocales};
  var targetLocales : [targetLocDom] locale;
  for idx in targetLocDom do targetLocales[idx] = Locales[idx];

  var q = new DistributedBoundedQueue(int, cap=b.N, targetLocDom=targetLocDom, targetLocales=targetLocales);
  const nPerLoc = b.N / numLocales;
  const nPerTask = nPerLoc / here.maxTaskPar;

  b.timer.clear();
  coforall loc in Locales do on loc {
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
  nLocales = 1;
  var arr : [{0..0}] (int, int);
  var lastIter = false;

  if numLocales == 1 then lastIter = true;
  while nLocales <= numLocales {
    var b = new B();
    b.benchTime = (0,0,0,30,0,0);
    b.benchFunc = doWork;
    b.run();
    arr.push_back((nLocales, b.N / ((b.timer.elapsed(TimeUnits.microseconds) * 1000) * 1e-9) : int));

    if lastIter then break;
    nLocales = min(numLocales, nLocales * 2);
    if nLocales == numLocales then lastIter = true;
  }

  plot("DistributedBoundedQueue - Enqueue", arr);
}
