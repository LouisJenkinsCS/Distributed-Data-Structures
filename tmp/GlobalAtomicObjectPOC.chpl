use CyclicDist;
use BigInteger;

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

var bitmap = new bigint(0);


for i in 0 .. 1000 {
  var firstFreeBit = bitmap.scan0(0);
  bitmap.setbit(firstFreeBit);
  writeln("Bit: ", firstFreeBit, ", Segment: ", findSegment(firstFreeBit), ", Index: ", findSegmentIndex(firstFreeBit));

}

/*writeln(bitmap : string);*/
