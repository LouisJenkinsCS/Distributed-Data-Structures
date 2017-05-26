use Distributed_FIFO;
use graph;
use Time;

proc main() {

  bfs();
}

proc bfs() {
  // Create a simple complete graph...
  var g = new graph(int);
  g.completeGraphInit();

  // For each of the vertices, construct a new queue...
  var q = new Distributed_FIFO(int);
  var t = new Timer();
  t.start();
  [v in g.vertices] q.enqueue(v);
  t.stop();
  writeln("Added all vertices in ", t.elapsed(), " seconds...");
  // Keep track of all vertices visited...
  var visited : [1 .. g.vertices.size] bool;

  t = new Timer();
  t.start();
  // Perform a breadth-first search...
  var pass = 1;
  while true {
    var (present, elem) = q.dequeue();
    // Empty
    if !present then break;
    // Already processed...
    if visited(elem) then continue;

    // We're visiting it now...
    visited(elem) = true;
    [(ingoingEdge, outEdge) in g.edges.domain] if ingoingEdge == elem && !visited(outEdge) then q.enqueue(outEdge);

    pass = pass + 1;
    writeln("Pass: ", pass);
  }

  writeln("BFS in #", pass, " of passes in ", t.elapsed(), " seconds...");
}
