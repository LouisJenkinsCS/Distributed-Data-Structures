require "misc/Atomic128bit.h", "misc/Atomic128bit.c";

class C {
  var x : int;
  var y : int;
}

// Note: Pointer aliasing not allowed!
extern proc cas128bit(a : c_void_ptr, b : c_void_ptr, c : c_void_ptr) : int;
extern proc read128bit(a : c_void_ptr, b : c_void_ptr);

proc main() {
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
