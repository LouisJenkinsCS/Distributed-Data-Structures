use Collection;
use DistributedBoundedQueue;
use DistributedQueue;
use DistributedBag;
use SynchronizedList;
use Benchmark;
use Plot;

proc main() {
  var plotter : Plotter(int, real);
  var targetLocales = (2,4,8,16,32,64);

  // Collections share the same API and hence share the same benchFn and deinitFn
  var benchFn = lambda(bd : BenchmarkData) {
    var c = bd.userData : Collection(int);
    for i in 1 .. bd.iterations {
      var _ignored = c.remove();
    }
  };
  var deinitFn = lambda(obj : object) {
    delete obj;
  };

  // DistributedQueue - Benchmark
  /*runBenchmarkMultiplePlotted(
      benchFn = benchFn,
      deinitFn = deinitFn,
      targetLocales=targetLocales,
      benchName = "DistributedQueue",
      plotter = plotter,
      initFn = lambda (bmd : BenchmarkMetaData) : object {
        var c = new DistributedQueue(int, targetLocDom=bmd.targetLocDom, targetLocales=bmd.targetLocales);
        forall i in 1 .. bmd.totalOps do c.add(i);
        return c;
      }
  );

  // DistributedBoundedQueue - Benchmark
  runBenchmarkMultiplePlotted(
      benchFn = benchFn,
      deinitFn = deinitFn,
      targetLocales=targetLocales,
      benchName = "DistributedBoundedQueue",
      plotter = plotter,
      initFn = lambda (bmd : BenchmarkMetaData) : object {
        var c = new DistributedBoundedQueue(int, cap=bmd.totalOps, targetLocDom=bmd.targetLocDom, targetLocales=bmd.targetLocales);
        forall i in 1 .. bmd.totalOps do c.add(i);
        return c;
      }
  );

  // SynchronizedList - Benchmark
  runBenchmarkMultiplePlotted(
      benchFn = benchFn,
      deinitFn = deinitFn,
      targetLocales=targetLocales,
      benchName = "SynchronizedList",
      plotter = plotter,
      initFn = lambda (bmd : BenchmarkMetaData) : object {
        var c = new SynchronizedList(int);
        forall i in 1 .. bmd.totalOps do c.add(i);
        return c;
      }
  );*/

  // DistributedBag - Benchmark
  runBenchmarkMultiplePlotted(
      benchFn = benchFn,
      deinitFn = deinitFn,
      targetLocales=targetLocales,
      benchName = "DistributedBag",
      plotter = plotter,
      initFn = lambda (bmd : BenchmarkMetaData) : object {
        var c = new DistributedBag(int, targetLocDom=bmd.targetLocDom, targetLocales=bmd.targetLocales);
        forall i in 1 .. bmd.totalOps do c.add(i);
        return c;
      }
  );

  // DistributedBag (w/ Localization) - Benchmark
  /*runBenchmarkMultiplePlotted(
      benchFn = lambda(bd : BenchmarkData) {
        var c = (bd.userData : DistributedBag(int)).localBag;
        for i in 1 .. bd.iterations {
          c.remove();
        }
      },
      deinitFn = deinitFn,
      targetLocales=targetLocales,
      benchName = "DistributedBag with Localization",
      plotter = plotter,
      initFn = lambda (bmd : BenchmarkMetaData) : object {
        var c = new DistributedBag(int, targetLocDom=bmd.targetLocDom, targetLocales=bmd.targetLocales);
        forall i in 1 .. bmd.totalOps do c.add(i);
        return c;
      }
  );*/

  plotter.plot("Collections_Remove_Benchmark");
}
