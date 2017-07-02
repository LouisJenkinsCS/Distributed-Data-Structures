use Bitmap;
use CyclicDist;
use Time;

// TODO: Make a global list this way...
// var head : atomic node;
// var tail : atomic node;
// # Inside 'add' function...
// var node = new node();
// var prev = tail.exchange(node);
// if prev == nil then head.write(node);
// else prev.next = node;

// Global Descriptor Table type
config const GDT_NUM_ENTRIES = 64;

class GDT {
  type entryType;
  var gdtSpace = {1..GDT_NUM_ENTRIES};
  var locDom = LocaleSpace dmapped Cyclic(startIdx=LocaleSpace.low);
  var gdtEntries : [locDom][gdtSpace] entryType;
  var gdtBitmap : [locDom] Bitmap;

  proc register(entry : entryType) : uint {
    ref bitmap = gdtBitmap[gdtBitmap.domain.localSubdomain().first];
    var idx = bitmap.next() + 1;
    gdtEntries[gdtEntries.domain.localSubdomain().first][idx] = entry;
    return here.id << 32 | idx;
  }

  inline proc read(descrIdx : uint) {
    return gdtEntries[(descrIdx >> 32) : int][(descrIdx & 0xFFFFFFFF) : int];
  }

  inline proc write(descrIdx : uint, data : entryType) {
    gdtEntries[(descrIdx >> 32) : int][(descrIdx & 0xFFFFFFFF) : int] = data;
  }

  inline proc unregister(descrIdx : uint) {
    gdtBitmap[descrIdx >> 32].clear((descrIdx & 0xFFFFFFFF) - 1);
  }
}

config const isGDT : bool;
config const isSync : bool;
config const logNodes : bool;

proc syncTest() {
  class node {
    var idx : int;
    var next : node;
  }

  class wrapper {
    var tail : node;
  }
  var tailWrapper : wrapper = new wrapper();
  var tailLock$ : sync bool;

  var time = new Timer();
  time.start();
  coforall loc in Locales {
    on loc {
      forall i in 1 .. GDT_NUM_ENTRIES {
        var n = new node();
        n.idx = here.id << 32 | i;
        tailLock$ = true;

        n.next = tailWrapper.tail;
        tailWrapper.tail = n;

        tailLock$;
      }
    }
  }
  time.stop();

  if logNodes {
    // Go through every tail...
    var curr = tailWrapper.tail;
    while curr != nil {
      writeln(curr.idx);
      curr = curr.next;
    }
  }

  return time.elapsed();
}

proc gdtTest() {
  class node {
    var idx : int;
    var nextIdx : uint;
  }

  var _gdt : GDT(node) = new GDT(node);
  var tail : atomic uint;
  var head : atomic uint;

  var time = new Timer();
  time.start();
  coforall loc in Locales {
    on loc {
      var gdt = _gdt;
      forall i in 1 .. GDT_NUM_ENTRIES {
        var n = new node();
        n.idx = here.id << 32 | i;
        var nIdx = gdt.register(n);

        var tailIdx = tail.exchange(nIdx);
        n.nextIdx = tailIdx;

        if tailIdx == 0 {
          head.write(nIdx);
        }
      }
    }
  }
  time.stop();

  if logNodes {
    // Go through every tail...
    var curr = tail.read();
    while curr != 0 {
      var currNode = _gdt.read(curr);
      writeln(currNode.idx);
      curr = currNode.nextIdx;
    }
  }

  return time.elapsed();
}

config const nTrials = 4;

proc main() {

  writeln("NumLocales: ", numLocales);
  var gdtTimes : [{1 .. nTrials}] real;
  for i in 1 .. nTrials {
    if i == 1 then gdtTest();
    gdtTimes[i] = gdtTest();
    writeln("GDT Trial ", i, "/", nTrials, ": ", gdtTimes[i]);
  }
  /*gdtTimes.pop_front();*/
  var gdtAvg = (+ reduce gdtTimes) / nTrials;
  writeln("GDT Avg: ", gdtAvg);

  var syncTimes : [{1 .. nTrials}] real;
  for i in 1 .. nTrials {
    if i == 1 then syncTest();
    syncTimes[i] = syncTest();
    writeln("Sync Trial ", i, "/", nTrials, ": ", syncTimes[i]);
  }
  /*syncTimes.pop_front();*/
  var syncAvg = (+ reduce syncTimes) / nTrials;
  writeln("Sync Avg: ", syncAvg);

  /*writeln(numLocales, ",", gdtAvg, ",", syncAvg);*/
}
