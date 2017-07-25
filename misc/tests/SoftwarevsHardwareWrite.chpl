require "misc/Atomic128bit.h", "misc/Atomic128bit.c";
use GlobalAtomicObject;
use Time;

class C {
  var x : int;
  var y : int;
}

// Note: Pointer aliasing not allowed!
extern proc write128bit(a : c_void_ptr, b : c_void_ptr);

config const nElements = 1000000;
config const nComputations = 0;


extern type wide_ptr_t;
extern type c_nodeid_t;
extern proc chpl_return_wide_ptr_node(c_nodeid_t, c_void_ptr) : wide_ptr_t;

inline proc compressPointer(c : C) : uint {
  var locId = chpl_nodeFromLocaleID(__primitive("_wide_get_locale", c)) : uint;
  var addr = __primitive("cast", uint, __primitive("_wide_get_addr", c));
  return (locId << 48) | (addr & 0x0000FFFFFFFFFFFF);
}

inline proc decompressPointer(ptr : uint) : C {
  var locId = ptr >> 48;
  var addr = ptr & 0x0000FFFFFFFFFFFF;
  var wideptr = chpl_return_wide_ptr_node(locId, __primitive("cast", c_void_ptr, ptr));
  var c : C;
  on Locales[here.id] do c = nil;
  c_memcpy(c_ptrTo(c), c_ptrTo(wideptr), 16);

  return c;
}

proc compressionWriteTest() {
  var atomicC : atomic uint;

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var c = new C(1,1);
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        var readVal = atomicC.write(compressPointer(c));

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Compression Write Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc softwareWriteTest() {
  class wrapper {
    var value : GlobalAtomicObject(C);
  }
  var c = new C(1,1);
  var atomicC = new wrapper();
  atomicC.value.write(c);

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var c = new C();
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        atomicC.value.write(c);

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Software Write Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc hardwareWriteTest() {
  var c : C;
  on Locales[here.id] do c = new C(1,1);
  var cptr = c_ptrTo(c) : c_void_ptr;

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var _c : C;
    on Locales[here.id] do _c = new C(1,1);
    var _cptr = c_ptrTo(_c) : c_void_ptr;

    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        on c do write128bit(cptr, _cptr);

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Hardware Write Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc main() {
  compressionWriteTest();
  softwareWriteTest();
  hardwareWriteTest();
}
