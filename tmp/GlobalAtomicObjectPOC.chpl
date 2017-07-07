use CyclicDist;


extern proc chpl_wide_ptr_get_localeID(obj) : uint;

class Obj { var x = 0; }

record WidePtr {
  var addr : uint;
  var locId : uint(32);
}

var dom : domain(uint);
var descriptorTableDom = LocaleSpace dmapped Cyclic(startIdx=LocaleSpace.low);
var descriptorTable : [descriptorTableDom] [dom] uint;


var o1 = new Obj(1);
var o2 = new Obj(2);

writeln(o1 < o2);
