config const nSize = 1024;

extern proc chpl_memalign(boundary, size) : c_void_ptr;
var a = chpl_memalign(nSize, nSize);



writeln(a : string);
