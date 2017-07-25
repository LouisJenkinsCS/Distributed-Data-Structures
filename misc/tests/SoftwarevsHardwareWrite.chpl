require "misc/Atomic128bit.h", "misc/Atomic128bit.c";
use GlobalAtomicObject;
use Time;

class C {
  var x : int;
  var y : int;
}

// Note: Pointer aliasing not allowed!
extern proc cas128bit(a : c_void_ptr, b : c_void_ptr, c : c_void_ptr) : int;
extern proc write128bit(a : c_void_ptr, b : c_void_ptr);

config const nElements = 1000000;
config const nComputations = 0;


extern type wide_ptr_t;
extern type c_nodeid_t;
extern proc chpl_return_wide_ptr_node(c_nodeid_t, c_void_ptr) : wide_ptr_t;

inline proc compressPointer(c : C) : uint {
  var locId = chpl_nodeFromLocaleID(__primitive("_wide_get_locale", obj)) : uint;
  var addr = __primitive("cast", uint, __primitive("_wide_get_addr", obj));
  return (locId << 48) | (addr & 0x0000FFFFFFFFFFFF);
}

inline proc decompressPointer(ptr : uint) : C {
  var locId = ptr >> 48;
  var addr = ptr & 0x0000FFFFFFFFFFFF;
  var wideptr = chpl_return_wide_ptr_node(locId, __primitive("cast", c_void_ptr, addr));
  var c : C;
  on Locales[here.id] do c = nil;
  c_memcpy(c_ptrTo(c), c_ptrTo(wideptr), 16);

  return c;
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
    var foo = new Foo();
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        atomicC.value.write(foo);

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
  var c = new C(1,1);
  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var foo = new Foo();
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        on c {
          write128bit(c_ptrTo(c) : c_void_ptr, c_ptrTo(foo) : c_void_ptr);
          assert(dest == c);
        }

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
  softwareWriteTest();
  hardwareWriteTest();
}
