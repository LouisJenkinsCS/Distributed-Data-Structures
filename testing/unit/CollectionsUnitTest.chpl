proc unitTest(c : Collection(int)) {
  // Add & Size...
  for i in 1 .. 100 {
    c.add(i);
    assert(c.size() == i);
  }

  // Remove...
  for i in 1 .. 100 {
    var (hasElem, elem) = c.remove();
    assert(c.size() == 100 - i);
    assert(hasElem);
    assert(elem == i);
  }
}
