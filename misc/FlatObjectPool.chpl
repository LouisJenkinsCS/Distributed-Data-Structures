use BigInteger;

class FlatObjectPoolSegment {
  type objType;
  var size : int;
  var data : [{0 .. size-1}] objType;
}

class FlatObjectPool {
  type objType;
  var spawnFn : func(objType);
  var freeFn : func(objType, void);
  var lock$ : sync bool;
  var bitmap : bigint;
  var segmentSpace = {1..32};
  var segments : [segmentSpace] FlatObjectPoolSegment(objType);

  inline proc findSegment(n) {
    var bit = 31;
    while bit > 0 {
      if n & (1 << bit) != 0 then break;
      bit = bit - 1;
    }

    return bit;
  }

  inline proc findSegmentIndex(n) {
    // If n is 1, then there is only one slot
    if n == 1 {
      return 0;
    }

    var mostSignificantBit = findSegment(n);
    return n & ((1 << mostSignificantBit) - 1);
  }

  proc alloc() : (int, objType) {
    lock$ = true;

    // Find an open spot, but resize if one is not found...
    var firstFreeBit = bitmap.scan0(1) : int;
    bitmap.setbit(firstFreeBit);

    var seg = findSegment(firstFreeBit) + 1;
    var segIdx = findSegmentIndex(firstFreeBit);

    // First-Touch Allocation
    if segments[seg] == nil {
        segments[seg] = new FlatObjectPoolSegment(objType, (1 << (seg - 1)));
    }

    ref obj = segments[seg].data[segIdx];

    // Reuse if already allocated, otherwise allocate and use
    if obj == nil then obj = spawnFn();
    // Get by value...
    var retval = obj;
    lock$;

    return (firstFreeBit, retval);
  }

  proc dealloc(idx) {
    lock$ = true;
    bitmap.clrbit(idx);
    lock$;
  }

  // Access by index. This is safe because segments are not freed after allocation
  // and so concurrent accesses will not invalidate a valid index.
  proc access(idx) : objType {
    return segments[findSegment(idx) + 1].data[findSegmentIndex(idx)];
  }

  proc FlatObjectPool(type objType, spawnFn = nil, freeFn = nil) {
    segments[1] = new FlatObjectPool(objType, 1);
  }

  proc ~FlatObjectPool() {
    for seg in segments {
      if seg != nil {
        for obj in seg.data {
          if obj != nil {
            if freeFn != nil {
              freeFn(obj);
            } else {
              delete obj;
            }
          }
        }
      }
    }
  }
}

proc main() {
  class Obj { var x = 1; }
  var pool = new FlatObjectPool(Obj, lambda() { return new Obj(); });

  forall i in 1 .. 100000 {
    var (idx, obj) = pool.alloc();
    obj.x = obj.x + 1;
    writeln("Allocated #", idx, ": ", obj);
    pool.dealloc(idx);
  }
}
