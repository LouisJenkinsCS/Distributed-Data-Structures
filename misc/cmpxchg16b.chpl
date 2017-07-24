require "misc/Atomic128bit.h", "misc/Atomic128bit.c";
use GlobalAtomicObject;
use Time;

class C {
  var x : int;
  var y : int;
}

// Note: Pointer aliasing not allowed!
extern proc cas128bit(a : c_void_ptr, b : c_void_ptr, c : c_void_ptr) : int;
extern proc read128bit(a : c_void_ptr, b : c_void_ptr);

config const nElements = 1000000;

proc globalAtomicSingleOp() {
  class AtomicObjWrapper { var obj : GlobalAtomicObject(C); }
  var atomicObj = new AtomicObjWrapper();
  atomicObj.obj.write(new C());
  var timer = new Timer();

  timer.start();
  coforall loc in Locales do on loc {
    var foo = new C();
    coforall tid in 0..#here.maxTaskPar {
      for i in 1 .. nElements / here.maxTaskPar {
        atomicObj.obj.write(foo);
      }
    }
  }
  timer.stop();

  writeln("Software Write Test(", nElements, " Elements): ", timer.elapsed());
}

proc softwareReadTest() {
  class wrapper {
    var value : GlobalAtomicObject(C);
  }
  var c = new C(1,1);
  var atomicC = new wrapper();
  atomicC.value.write(c);

  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0 .. #here.maxTaskPar {
      for i in 1 .. nElements / here.maxTaskPar {
        var readVal = atomicC.value.read();
        assert(readVal == c);
      }
    }
  }
  timer.stop();

  writeln("Software Read Test(", nElements, " Elements): ", timer.elapsed());
}

proc hardwareReadTest() {
  var c = new C(1,1);
  var timer = new Timer();
  timer.start();
  coforall loc in Locales do on loc {
    coforall tid in 0 .. #here.maxTaskPar {
      for i in 1 .. nElements / here.maxTaskPar {
        on c {
          var _c = c;
          var dest : C;
          on Locales[here.id] do dest = nil;
          read128bit(c_ptrTo(_c) : c_void_ptr, c_ptrTo(dest) : c_void_ptr);
          assert(dest == c);
        }
      }
    }
  }
  timer.stop();

  writeln("Hardware Read Test(", nElements, " Elements): ", timer.elapsed());
}

proc proof_of_correctness() {
  var c1 : C;
  var c2 : C;
  on Locales[here.id] do c1 = new C(1,1);
  on Locales[here.id] do c2 = new C(2,2);
  var c3 : C = c1;

  var result = cas128bit(c_ptrTo(c1) : c_void_ptr, c_ptrTo(c3) : c_void_ptr, c_ptrTo(c2) : c_void_ptr);
  writeln("Result: ", result, ", c1: ", c1, ", c2: ", c2, ", c3: ", c3);

  var c4 : C;
  on Locales[here.id] do c4 = nil;
  read128bit(c_ptrTo(c1) : c_void_ptr, c_ptrTo(c4) : c_void_ptr);
  writeln("Atomic Result: ", c4);
  /*writeln(c1);*/
}

proc main() {
  globalAtomicSingleOp();
  softwareReadTest();
  hardwareReadTest();
}
