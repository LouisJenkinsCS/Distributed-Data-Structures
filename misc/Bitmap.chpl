record Bitmap {
  var nBits$ : sync uint = 4096;
  var bitmapSpace = {1 .. 4096 / 64};
  var bitmap : [bitmapSpace] uint(64);

  proc clear(idx) {
    var _nBits = nBits$;
    bitmap[idx / 64] = bitmap[idx / 64] & ~(1 << ((idx - 1) % 64));
    nBits$ = _nBits;
  }

  inline proc resize(currBits) {
    var newBits = currBits * 2;
    bitmapSpace = { 1 .. (currBits / 64) : int };
  }

  proc next() {
    var _nBits = nBits$;
    var startBit = 0;

    // Entire bitmap is full, skip...
    while bitmap[startBit / 64] == 0xFFFFFFFFFFFFFFFF {
      startBit = startBit + 64;

      // If we checked all bits but none are available, time to resize and claim...
      if startBit >= _nBits {
        resize(_nBits);
        bitmap[startBit / 64] = bitmap[startBit / 64] | (1 << (startBit % 64));
        nBits$ = _nBits * 2;
        return startBit;
      }
    }

    // Find first free bit
    for bit in startBit .. _nBits : int {
      if bitmap[bit / 64] & (1 << (bit % 64)) == 0 {
        bitmap[bit / 64] = bitmap[bit / 64] | (1 << (bit % 64));
        nBits$ = _nBits;
        return bit;
      }
    }

    halt("A bit was not found!!! Bitmap: ", bitmap);
  }
}
