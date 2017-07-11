use CyclicDist;
use SkipList;

extern type wide_ptr_t;
extern type c_nodeid_t;
extern proc chpl_return_wide_ptr_node(c_nodeid_t, c_void_ptr) : wide_ptr_t;

/*
  Object that allows atomic operations on class instances. Each instance manages
  it's own table which is used to store objects and creates descriptors that refer
  to the index into the table over a 128-bit wide pointer. Currently will only work
  for 2^32 Locales and has enough for 2^32 slots in the table. Only works on class
  instances and is hashed by pointer, not by the value it holds, so each hash value
  is guaranteed to be unique.
*/
record GlobalAtomicObject {
  type objType;
  type atomicType = uint(64);
  var _atomicVar: atomic atomicType;

  var perLocaleDomain = LocaleSpace dmapped Cyclic(startIdx=LocaleSpace.low);
  var descriptorTables : [perLocaleDomain] SkipList(objType);
  var descriptorTableLocks : [perLocaleDomain] sync bool;

  proc compress(obj:objType) : uint {
    if obj == nil then return 0;

    // If we have less than 2^16 locales, we can perform a faster compression
    // by packing the 48 usable bits of the virtual address with 16 bits of the
    // locale/node id.
    if numLocales & 0xFFFF == numLocales {
      var locId = chpl_nodeFromLocaleID(__primitive("_wide_get_locale", obj)) : uint;
      var addr = __primitive("cast", uint, __primitive("_wide_get_addr", obj));
      return locId << 48 | addr & 0x0000ffffffffffff;
    }

    // Fallback: We use descriptor tables
    var retval : uint;
    on obj {
      descriptorTableLocks[descriptorTableLocks.domain.localSubdomain().first] = true;
      var node = descriptorTables[descriptorTables.domain.localSubdomain().first].insert(obj);
      var localeId = here.id;
      if (localeId & 0xFFFFFFFF) != localeId then halt("LocaleID > 2^32");
      var idx = node.idx;
      if (idx & 0xFFFFFFFF) != idx then halt("Idx > 2^32");
      retval = localeId << 32 | idx;
      descriptorTableLocks[descriptorTableLocks.domain.localSubdomain().first];
    }

    return retval;
  }

  proc decompress(descr:uint) : objType {
    if descr == 0 then return nil;


    // If we have less than 2^16 locales, then we know we performed the
    // faster compression method so we need to decompress it in the same way...
    if numLocales & 0xFFFF == numLocales {
      var locId = descr >> 48;
      var addr = descr & 0x0000ffffffffffff;
      var wideptr = chpl_return_wide_ptr_node(locId, __primitive("cast", c_void_ptr, addr));

      // We've created the wide pointer, but unfortunately Chapel does not support
      // the ability to cast it to the actual object, so we have to do some
      // trickery to get it to work. What we do is we allocate a wide pointer
      // the stack and memcpy our wideptr into the actual wide pointer.
      var newObj : objType;
      on Locales[here.id] do newObj = nil;

      // Warning: If this is *not* a wide pointer, it will overwrite part of the stack.
      // If it is, it works. Dangerous, but only way to do so at the moment.
      c_memcpy(c_ptrTo(newObj), c_ptrTo(wideptr), 16);
      return newObj;
    }

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

  // TODO: Save time by comparing the actual objects, not just the hash... if both
  // objects are remote, this is a *significant* cost.
  //  var currDescr = _atomicVar.read();
  //  var currObj = decompress(currDescr);
  //  if currObj == expectedObj then _atomicVar.compareExchangeStrong(currDescr, compress(newObj));
  inline proc compareExchange(expectedObj:objType, newObj:objType) : bool {
    return _atomicVar.compareExchangeStrong(compress(expectedObj), compress(newObj));
  }

  inline proc _delete(obj:objType) {
    if obj != nil then on obj {
      descriptorTableLocks[descriptorTableLocks.domain.localSubdomain().first] = true;
      descriptorTables[descriptorTables.domain.localSubdomain().first].remove(obj);
      descriptorTableLocks[descriptorTableLocks.domain.localSubdomain().first];
    }
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
