extern proc cmpxchg16b(src : c_void_ptr, cmp : c_void_ptr, wth : c_void_ptr) : int;

record C {
  var x : int;
  var y : int;
}

var c1 = new C(1,1);
var c2 = new C(2,2);

cmpxchg16b(c_ptrTo(c1), c_ptrTo(c1), c_ptrTo(c2));

writeln(c1);
