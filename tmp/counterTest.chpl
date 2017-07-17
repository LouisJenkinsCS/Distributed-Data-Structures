record RAII {
  var str : string = "Broke early";
  proc ~RAII() {
    writeln(str);
  }
}

class iterExample {

  var lock$ : sync bool;
  iter these() {
    lock$ = true;
    writeln("Start");
    var raii : RAII;
    forall i in 1 .. 1 {
      yield i;
    }
    raii.str = "Done";
    lock$ = false;
  }
}

proc test() : iterExample {
  var it = new iterExample();
  for i in it {
    return it;
  }
  return it;
}

proc main() {
  var it = test();
  for i in it {
    break;
  }

  writeln("In Main");
}
