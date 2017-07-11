extern type wide_ptr_t;
extern type c_nodeid_t;
extern proc chpl_return_wide_ptr_node(c_nodeid_t, c_void_ptr) : wide_ptr_t;

proc c_void_ptr_to_uint(ptr:c_void_ptr)
{
  return __primitive("cast", uint, ptr);
}

proc uint_to_c_void_ptr(u:uint)
{
  return __primitive("cast", c_void_ptr, u);
}

class Wrapper {
  var ptr;
}

class C {
  var x:int;
}

proc test(obj:object)
{
  var loc = __primitive("_wide_get_locale", obj);
  var node = chpl_nodeFromLocaleID(loc);
  var subloc = chpl_sublocFromLocaleID(loc);
  var raddr = __primitive("_wide_get_addr", obj);

  // TODO: reasonable checking for pointers/nodes
  // too big to fit into this format.
  // TODO: configurable format

  // Let's "pack" the wide pointer
  var uraddr = c_void_ptr_to_uint(raddr);
  var unode = node:uint;
  var packed:uint = 0;
  packed = uraddr & 0x0000ffffffffffff;
  packed |= unode << 48;

  writef("node %xi              raddr %016xi\n", unode, uraddr);
  writef("packed to                 %016xi\n", packed);

  // Let's "unpack" the wide pointer.
  var got_uraddr = packed & 0x0000ffffffffffff;
  var got_unode = packed >> 48;
  var got_raddr = uint_to_c_void_ptr(got_uraddr);
  writef("unpacked to node %xi  raddr %016xi\n", got_unode, got_uraddr);

  // check pointer value matches.
  assert(raddr == got_raddr);
  // check node matches
  assert(obj.locale.id == got_unode);

  var wideptr = chpl_return_wide_ptr_node(got_unode, got_raddr);
  var newObj : C;
  on Locales[here.id] do newObj = new C();
  c_memcpy(c_ptrTo(newObj), c_ptrTo(wideptr), 16);
  assert(obj == newObj);
}



for loc in Locales {
  on loc {
    var c = new C(10);
    test(c);
  }
}
