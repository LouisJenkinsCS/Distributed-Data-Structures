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
}


proc main() {
  class Obj { var x = 1; }
  var arr : [{1..1}] Obj;
  var globalAtomicObject = new GlobalAtomicObject(Obj);
  for i in 1 .. 1 {
    var obj = new Obj();
    obj.x = i;
    arr[i] = obj;
  }
  var obj = arr[1];
  var descr = globalAtomicObject.compress(obj);
  assert(descr != 0);

  var retval = globalAtomicObject.decompress(descr);
  assert(retval == obj);
}
