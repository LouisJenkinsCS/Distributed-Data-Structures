require "misc/Atomic128bit.h", "misc/Atomic128bit.c";
use GlobalAtomicObject;
use Time;

class C {
  var x : int;
  var y : int;
}

// Note: Pointer aliasing not allowed!
extern proc read128bit(a : c_void_ptr, b : c_void_ptr);
extern proc cas128bit(a : c_void_ptr, b : c_void_ptr, c : c_void_ptr) : int;

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
  if !__primitive("is wide pointer", c) {
    halt(
      "Dummy object created was not a wide pointer!",
      " Assumption: Inside a 'local' block"
    );
  }
  c_memcpy(c_ptrTo(c), c_ptrTo(wideptr), 16);

  return c;
}

proc compressionRemoteCASTest() {
  var atomicC : atomic uint;
  atomicC.write(compressPointer(new C(1,1)));

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var c = new C(1,1);
    var compressedC = compressPointer(c);
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        while true {
          var _compressedC = atomicC.read();
          var _c = decompressPointer(_compressedC);
          c.x = (_c.x + 1) % 100;
          if atomicC.compareExchangeStrong(_compressedC, compressedC) then break;

          writeln("CAS(", _compressedC, ", ", compressedC, ")");
        }

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Compression RemoteCAS Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc compressionLocalCASTest() {
  var atomicC : atomic uint;
  atomicC.write(compressPointer(new C(1,1)));

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    // Data *must* be remote...
    var c = new C(1,1);
    var compressedC = compressPointer(c);
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        on atomicC {
          while true {
            var _compressedC = atomicC.read();
            var _c = decompressPointer(_compressedC);
            c.x = (_c.x + 1) % 100;
            if atomicC.compareExchangeStrong(_compressedC, compressedC) then break;
          }
        }
        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Compression LocalCAS Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc softwareRemoteCASTest() {
  class AtomicObjWrapper { var obj : GlobalAtomicObject(C); }
  var atomicObj = new AtomicObjWrapper();
  atomicObj.obj.write(new C());
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    var foo = new C();
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nElements / here.maxTaskPar {
        while true {
          var _foo = atomicObj.obj.read();
          if atomicObj.obj.compareExchange(_foo, foo) then break;
        }

      }
    }
  }
  timer.stop();

  /*class wrapper {
    var value : GlobalAtomicObject(C);
  }
  var c = new C(1,1);
  var atomicC = new wrapper();
  atomicC.value.write(c);

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {

        var c = new C(1,1);
        while true {
          var _c = atomicC.value.read();
          if atomicC.value.compareExchange(_c, c) then break;
        }


        // Data *must* be remote... We also make optimization to test performance
        // when the descriptors are cached...
        var c = new C(1,1);
        var descriptorC = atomicC.value.compress(c);

        while true {
          var _descriptorC = atomicC.value._atomicVar.read();
          var _c = atomicC.value.decompress(_descriptorC);
          c.x = (_c.x + 1) % 100;
          if atomicC.value._atomicVar.compareExchangeStrong(_descriptorC, descriptorC) then break;
        }

        if i % 5000 == 0 then writeln(i, "/", nElements / here.maxTaskPar);

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
      writeln("Exiting...");
    }
  }
  timer.stop();*/

  writeln("Software RemoteCAS Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc softwareLocalCASTest() {
  class wrapper {
    var obj : GlobalAtomicObject(C);
  }
  var c = new C(1,1);
  var atomicObj = new wrapper();
  atomicObj.obj.write(c);

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    var foo = new C(1,1);
    coforall tid in 0 .. #here.maxTaskPar {
      var x : atomic int;
      for i in 1 .. nElements / here.maxTaskPar {
        on atomicObj {
          while true {
            var _foo = atomicObj.obj.read();
            if atomicObj.obj.compareExchange(_foo, foo) then break;
          }
        }

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Software LocalCAS Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc hardwareCASTest() {
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
        on c {
          while true {
            var readC : C;
            on Locales[here.id] do readC = nil;
            read128bit(cptr, c_ptrTo(readC) : c_void_ptr);

            var newC : C;
            on Locales[here.id] do newC = new C(readC.x + 1, readC.y * 2);
            if cas128bit(cptr, c_ptrTo(readC), c_ptrTo(newC)) then break;
          }
        }

        for i in 1 .. nComputations {
          x.write(sin(i) : int);
        }
      }
    }
  }
  timer.stop();

  writeln("Hardware CAS Test(", nElements, " Elements, Computations per Operation: ", nComputations, "): ", timer.elapsed());
}

proc main() {
  compressionRemoteCASTest();
  compressionLocalCASTest();
  hardwareCASTest();
  softwareRemoteCASTest();
  softwareLocalCASTest();
}
