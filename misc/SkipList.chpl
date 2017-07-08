use Hash;
use Random;

class SkipListNode {
  type keyType;
  var hash : uint(64);
  var key : keyType;
  var idx : uint;
  var forwardDom : domain(int);
  var forward : [forwardDom] SkipListNode(keyType);

  proc SkipListNode(type keyType, level : int) {
    forwardDom = { 1 .. level };
  }
}

record SkipListMemoryPool {
  type keyType;
  var size : uint;
  var pool : [{1 .. 1}] SkipListNode(keyType);

  proc SkipListMemoryPool(type keyType) {
    pool.clear();
  }

  proc allocNode() : SkipListNode(keyType) {
    var node = new SkipListNode(keyType);
    pool.push_back(node);
    node.idx = pool.domain.last();
    pool.push
    return node;
  }

  proc deallocNode(node : SkipListNode(keyType)) {
    var idx = node.idx;
    poolDom.remove(idx);
    delete node;
  }
}

record SkipList {
  type keyType;
  var maxLevel = 4;
  var level = 1;
  var header : SkipListNode(keyType) = new SkipListNode(keyType, level);
  var alloc : func(SkipListNode(keyType));

  // RNG to create randomized level
  var randStr = makeRandomStream(real);

  inline proc randomLevel() {
    var level = 1;
    while randStr.getNext() < 0.5 && level < maxLevel {
      level = level + 1;
    }
    return level;
  }

  proc insert(key : keyType) : SkipListNode(keyType) {
    // We hash the object to insert into the list. Note: We do not take into
    // account the localeId, so the object *must* not be a wide pointer.
    var hashKey = hash(key);
    var update : [{1 .. maxLevel}] SkipListNode(keyType);
    var currNode = header;
    var currLevel = level;

    // Start at higher level first...
    while currLevel > 1 {
      // Maintain same level so long ourHashKey > theirHashKey
      while currNode.forward[currLevel] != nil && currNode.forward[currLevel].hash < hashKey {
        currNode = currNode.forward[currLevel];
      }

      // At this point, ourHashKey < theirHashKey meaning we can't travel along this level.
      // However, because we are before them, that means that we would forward to them (if
      // we were to insert ourselves)
      update[currLevel] = currNode;
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


  }
}
