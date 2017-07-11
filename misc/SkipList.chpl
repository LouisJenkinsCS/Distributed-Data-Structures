use Hash;
use Random;
use FlatObjectPool;

class SkipListNode {
  type keyType;
  var hash : uint(64);
  var key : keyType;
  var idx : uint;
  var forwardDom : domain(int);
  var forward : [forwardDom] SkipListNode(keyType);
}

record SkipList {
  type keyType;
  var maxLevel = 4;
  var level = 1;
  var header : SkipListNode(keyType);
  var memPool : FlatObjectPool(SkipListNode(keyType));

  proc SkipList(type keyType) {
    memPool = new FlatObjectPool(SkipListNode(keyType), lambda () { return new SkipListNode(keyType); });
    header = makeNode(level);
  }

  // RNG to create randomized level
  var randStr = makeRandomStream(real);

  inline proc randomLevel() {
    var _level = 1;
    while randStr.getNext() < 0.5 && _level < maxLevel {
      _level = _level + 1;
    }
    return _level;
  }

  // Recycle and clean before usage...
  inline proc makeNode(_level, hash : uint = 0, key : keyType = nil) : SkipListNode(keyType) {
    var (idx, node) = memPool.alloc();
    node.idx = idx : uint;
    node.hash = hash;
    node.key = key;
    node.forwardDom = { 1 .. maxLevel };
    node.forward = nil;

    return node;
  }

  proc remove(key : keyType) {
    // We hash the object to remove from the list. Note: We do not take into
    // account the localeId, so the object *must* not be a wide pointer.
    var hashKey = hash(key);
    var update : [{1 .. maxLevel}] SkipListNode(keyType);
    var currNode = header;
    var currLevel = level;

    // Start at higher level first...
    while currLevel >= 1 {
      // Maintain same level so long ourHashKey > theirHashKey
      while currNode.forward[currLevel] != nil && currNode.forward[currLevel].hash < hashKey {
        currNode = currNode.forward[currLevel];
      }

      // At this point, ourHashKey < theirHashKey meaning we can't travel along this level.
      // However, because we are before them, that means that we would forward to them (if
      // we were to insert ourselves)
      update[currLevel] = currNode;
      currLevel = currLevel - 1;
    }

    // At this point, we cannot traverse any further than the bottom level.
    currNode = currNode.forward[1];
    if currNode == nil || currNode.hash != hashKey {
      return;
    }

    // It is a match, prepare to delete it by bridging the gap...
    for i in 1 .. level {
      if update[i].forward[i] != currNode then break;
      update[i].forward[i] = currNode.forward[i];
    }

    // Recycle node
    memPool.dealloc(currNode.idx);

    // If we are the highest node in the list, then we can reduce it.
    while level > 1 && header.forward[level] == nil {
      level = level - 1;
    }
  }

  proc insert(key : keyType) : SkipListNode(keyType) {
    // We hash the object to insert into the list. Note: We do not take into
    // account the localeId, so the object *must* not be a wide pointer.
    var hashKey = hash(key);
    var update : [{1 .. maxLevel}] SkipListNode(keyType);
    var currNode = header;
    var currLevel = level;

    // Start at higher level first...
    while currLevel >= 1 {
      // Maintain same level so long ourHashKey > theirHashKey
      while currNode.forward[currLevel] != nil && currNode.forward[currLevel].hash < hashKey {
        currNode = currNode.forward[currLevel];
      }

      // At this point, ourHashKey < theirHashKey meaning we can't travel along this level.
      // However, because we are before them, that means that we would forward to them (if
      // we were to insert ourselves)
      update[currLevel] = currNode;
      currLevel = currLevel - 1;
    }

    // At this point, we cannot traverse any further than the bottom level.
    // Note that in this application, if it already exists then we can safely
    // return it.
    currNode = currNode.forward[1];
    if currNode != nil && currNode.hash == hashKey {
      return currNode;
    }

    // It doesn't exist (yet), so create one with a randomized level...
    var newLevel = randomLevel();

    // If the new level exceeds the current, we need to ensure that we are
    // forwardable from the header...
    if newLevel > level {
      for i in level + 1 .. newLevel {
        update[i] = header;
      }
      level = newLevel;
    }

    // Create new node and splice in
    currNode = makeNode(newLevel, hashKey, key);

    // Bridging the gap...
    for i in 1 .. newLevel {
      currNode.forward[i] = update[i].forward[i];
      update[i].forward[i] = currNode;
    }

    return currNode;
  }

  proc ~SkipList() {
    // Deleting memory pool ensures all memory that has been allocated with it gets
    // destroyed as well.
    delete memPool;
  }
}

proc debugNode(node) {
  writeln("(Key: ", node.hash, ", Idx: ", node.idx, ", Forward: {");
  for fw in node.forward {
    if fw != nil then writeln("\t(Key: ", fw.hash, ", Idx: ", fw.idx, ")");
  }
  writeln("}");
}

proc main() {
  class Obj { var x = 1; }
  var sl = new SkipList(Obj);

  var arr : [{1 .. 10}] Obj;
  var idx : [{1 .. 10}] uint;

  for i in 1 .. 10 {
    var obj = new Obj(i);
    arr[i] = obj;
    var node = sl.insert(obj);
    idx[i] = node.idx;
    debugNode(node);
  }

  forall ix in idx.domain {
    var node = sl.memPool.access(idx[ix] : int);
    var obj1 = node.key;
    var obj2 = arr[ix : int];
    writeln("Testing ", obj1, " to ", obj2);
    assert(obj1 == obj2);
  }
}
