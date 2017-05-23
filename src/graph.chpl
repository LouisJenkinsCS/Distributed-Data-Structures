use Random;

class graph {
  type eltType;
  var numVertices : int = 1024;
  const numEdges : int = (numVertices * (numVertices - 1)) / 2;
  var vertices : [1 .. numVertices] eltType;
  var edges : [1 .. numVertices, 1 .. numVertices] bool;

  proc completeGraphInit() {
    for i in vertices.domain {
      vertices[i] = i;
    }

    var randStr = makeRandomStream(bool);
    for (i, j) in edges.domain {
      if randStr.getNext() then
        edges(i, j) = true;
    }
  }
}
