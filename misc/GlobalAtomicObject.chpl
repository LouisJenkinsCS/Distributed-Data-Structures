use CyclicDist;
use SkipList;

/*
  Note: This does not work at all, do *not* use!
*/
record GlobalAtomicObject {
  type objType;
  type atomicType = uint(64);
  var _atomicVar: atomic atomicType;

  var perLocaleDomain = LocaleSpace dmapped Cyclic(startIdx=LocaleSpace.low);
  var descriptorTables : [perLocaleDomain] SkipList(objType);

  proc compress(obj:objType) : uint {
    if obj == nil then return 0;

    var retval : uint;
    on obj {
      var node = descriptorTables[descriptorTables.domain.localSubdomain().first].insert(obj);
      var localeId = here.id;
      if (localeId & 0xFFFFFFFF) != localeId then halt("LocaleID > 2^32");
      var idx = node.idx;
      if (idx & 0xFFFFFFFF) != idx then halt("Idx > 2^32");
      retval = localeId << 32 | idx;
    }

    return retval;
  }

  proc decompress(descr:uint) : objType {
    if descr == 0 then return nil;
    var localeId = descr >> 32;
    var idx = descr & 0xFFFFFFFF;
    return descriptorTables[localeId : int].memPool.access(idx : int).key;
  }

  inline proc read() : objType {
    return decompress(_atomicVar.read());
  }

  inline proc write(obj:objType) {
    _atomicVar.write(compress(obj));
  }

  inline proc exchange(obj:objType) : objType {
    return decompress(_atomicVar.exchange(compress(obj)));
  }

  inline proc compareExchange(expectedObj:objType, newObj:objType) : bool {
    return _atomicVar.compareExchangeStrong(compress(expectedObj), compress(newObj));
  }

  inline proc _delete(obj:objType) {
    if obj != nil then on obj do descriptorTables[descriptorTables.domain.localSubdomain().first].remove(obj);
  }
}


proc multiLocaleTest() {
  class D { var d : int; }
  var arr : [{1..100}] D;
  for i in 1 .. 100 {
    on Locales[i % numLocales] do arr[i] = new D(i);
  }

  var x = new GlobalAtomicObject(D);
  x.write(arr[1]);

  for i in 1 .. 99 {
    assert(x.read() == arr[i]);
    var result = x.compareExchange(arr[i], arr[i+1]);
    assert(result);
    delete arr[i];
  }
}

proc singleLocaleTest() {
  class C { var c : int; }
  var a = new C(1);
  var b = new C(2);
  var x = new GlobalAtomicObject(C); // atomic C
  var result : bool;

  x.write(a);
  result = x.compareExchange(a, b);
  assert(result);
  assert(x.read() == b);

  // Note that you can call 'delete' on the object while having it still be present
  // in the descriptor table. This may be okay for most cases where memory is not
  // an issue since reused addresses will hash to the same node and that node will
  // already point to the valid object the user is attempting to insert. However if
  // memory is an issue, one can call '_delete' to ensure that the node itself is removed
  // and can be recycled for later use.
  delete a;
  delete b;

  // Is Safe because we only use the pointer itself.
  x._delete(a);
  x._delete(b);

  // As well, when GlobalAtomicObject goes out of scope, all nodes it had in use also
  // get deleted...
}

proc main() {
  writeln("Single Locale Test...");
  singleLocaleTest();
  writeln("Passed!");
  writeln("Multi Locale Test...");
  multiLocaleTest();
  writeln("Passed!");
}
