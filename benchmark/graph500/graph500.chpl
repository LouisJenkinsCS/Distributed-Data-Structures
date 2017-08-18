
use Random;
use BlockDist;
use LayoutCSR;
use Time;
use DistributedBag;
use DistributedDeque;
use Barrier;

var r = new RandomStream(int, seed = 13);

/**
 * Generates (0, 1, 2, 3) with probabilities (0.57, 0.19, 0.19, 0.05)
 */
proc g500_generate_quartile(){
  const DENOM = 100;
  const (A_NUM,B_NUM,C_NUM,D_NUM) = (57,19,19,5);

  var rand_num = (abs((r.getNext())%DENOM):int);

  if rand_num < A_NUM then return 0;
  rand_num -= A_NUM;
  if rand_num < B_NUM then return 1;
  rand_num -= B_NUM;
  if rand_num < C_NUM then return 2;
  return 3;
}

iter g500_vpair_generator(verticeIDs: [] int, numVertices: int,
    edgefactor = 16, prng_seed=13){
  var r = new RandomStream(int, seed=prng_seed);
  var u,v,q: int;
  var quartile_size = numVertices/2;

  const numEdges = numVertices*edgefactor;
  for edge in 1..numEdges {
    (u,v) = (0,0);
    var nv_temp = numVertices;
    while nv_temp > 1 {
      q = g500_generate_quartile();
      nv_temp /= 2;
      u += nv_temp * (q/2);
      v += nv_temp * (q%2);
    }

    yield (verticeIDs[u], verticeIDs[v]);
  }
}

proc createGraph500(scale: int, edgefactor=16, prng_seed=13){
  const numVertices = 1<<scale;
  const numEdges = numVertices*edgefactor;

  var verticeIDs: [0..#numVertices] int;

  for i in verticeIDs.domain {
    verticeIDs[i] = i;
  }

  /*scrambleVertices(verticeIDs, numVertices);*/

  const space = {0..#numVertices, 0..#numVertices};
  const denseDom = space dmapped Block(space,
      sparseLayoutType=CSR);
  var sparseDom: sparse subdomain(denseDom);

  const indexBufDom = {0..#2*numVertices*edgefactor};
  var indexBuf: [indexBufDom] 2*int;

  var count = 0;
  for e in g500_vpair_generator(verticeIDs, numVertices, edgefactor,
      prng_seed) {
    indexBuf[count] = e;
    indexBuf[count+1] = (e[2],e[1]);
    count += 2;
  }

  sparseDom += indexBuf;
  return sparseDom;
}

proc scrambleVertices(ref verticeIDs: [] int, numVertices: int){
  var j: int;
  for i in 0..#numVertices by -1 {
    j = (abs(r.getNext())%(i+1)):int;

    var tmp = verticeIDs[i];
    verticeIDs[i] = verticeIDs[j];
    verticeIDs[j] = tmp;
  }
}

config const scale = 5;
config const edgefactor = 16;
config const debug = false;
config const detailed = false;
config const validation = true;
config const numSampleKeys = 64;
config const debugKey = -1;


proc numActualNeighbors(g, v) {
  var count = 0;
  for x in g.dimIter(2, v) {
    count+=1;
  }
  return count;
}

config param isBag = false;

proc getBFSParentArray(g, key: int, ref parents: [] int){

  var step = 0;

  parents[key] = key;

  // Our data structures...
  var l0 = (if isBag then new DistributedBag(int) else new DistributedDeque(int));
  var l1 = (if isBag then new DistributedBag(int) else new DistributedDeque(int));

  inline proc produceQueue {
    if step%2 == 0 then return l0;
    else return l1;
  }

  inline proc consumeQueue {
    if step%2 == 1 then return l0;
    else return l1;
  }

  //parent[i] = j means j is an immediate parent of i in breadth first
  //iteration that starts from the root.

  consumeQueue.add(key);
  var b = new Barrier(numLocales*here.maxTaskPar);
  //as long as there vertices to be visited
  while !consumeQueue.isEmpty() {
    consumeQueue.freeze();
    forall v in consumeQueue {
      for n in g.dimIter(2,v) { // assume a serial `neighbors` iterator
        /*writeln("\t", v, ",", n);*/

        // note that this benign race condition is allowed. but you can
        // assume otherwise, if that makes things easier

        // than the enqueue should be enclosed in a CAS conditional on
        // parent[n]
        if parents[n] == -1 { // doesn't have a parent yet (unvisited)
          parents[n] = v; // "visit"
          produceQueue.add(n); // add to the "to-be-visited" queue
        }
      }
    }
    consumeQueue.unfreeze();
    consumeQueue.clear();
    step += 1;
  }
}

proc getBFSStats(parents: [] int, g) {
  var traversedEdges = 0, traversedNodes = 0;

  for i in 0..#(1<<scale) {
    if parents[i] != -1 {
      traversedNodes += 1;
      traversedEdges += numActualNeighbors(g, i);
    }
  }


  return (traversedNodes, traversedEdges/2);
}

proc validate(g, key: int, parents: [] int){

  var passed$: sync bool = true;
  //nonobligatory checks

  //if root is the only one whose parent is itself
  if key != parents[key] {
    writeln("Parent of root is not root");
    return false;
  }

  forall i in 0..#(1<<scale) {
    if parents[i] != -1 { //tree edge
      if i == parents[i] && i != key {
        writeln("Nonroot vertex " + i + " has itself as parent");
        passed$.writeFF(false);
      }
    }
  }

  if !passed$.readFF() then return false;

  //TODO cycle detection


  //each tree edge connects vertices whose BFS levels differ by exactly one
  forall i in 0..#(1<<scale) {
    if i != key {
      if parents[i] != -1 { //tree edge
        if abs(getLevel(i) - getLevel(parents[i])) != 1 {
          writeln("Condition 2 fails" + i + " " + parents[i] +
              " " + getLevel(i) + " " + getLevel(parents[i]));
          passed$.writeFF(false);
        }
      }
    }
  }

  if !passed$.readFF() then return false;

  //every edge in the input list has vertices with levels
  //that differ by at most one or that both are not in the BFS tree,
  for e in g {
    //neither in BFS tree
    if getLevel(e[1])==-1 && getLevel(e[2])==-1 then
      continue;

    if abs(getLevel(e[1]) - getLevel(e[2])) > 1 {
      writeln("Condition 3 fails " + e[1] + " " + e[2] + " " +
          getLevel(e[1]) + " " + getLevel(e[2]));
      /*writeln("Parents");*/
      /*[i in parents.domain] writeln(i, " ", parents[i]);*/
      /*writeln("Topology");*/
      /*g.print();*/
      /*writeln("Schedule");*/
      /*[i in vertexSpace] writeln(i, " ", g.bfIterator.scheduled_nb[i]);*/
      /*writeln("HAT Status");*/
      /*[l in g.bfs_state.levels] l.printStatus();*/
      return false;
    }
  }

  //the BFS tree spans an entire connected component's vertices, and


  //a node and its parent are joined by an edge of the original graph.

  // FIXME this check is not easy do to lack of checking if an index
  // exists in a sparseblockdom
  /*forall i in 0..#(1<<scale) {*/
    /*if parents[i] != -1 && i != key{ //tree edge*/
      /*if !(sparseDomContains(g,(i, parents[i]))) { // replacement for isEdge*/
        /*writeln("Condition 5 fails. No edge btw " + */
            /*i + " " + parents[i]);*/
        /*passed$.writeFF(false);*/
      /*}*/
    /*}*/
  /*}*/

  if !passed$.readFF() then return false;

  return passed$.readFF();

  proc getLevel(v: int, root: int = key){

    if v == root then return 0;

    var lvl = 1;
    var curParent = parents[v];
    /*writeln("Checking " + v + " with parent " + curParent);*/

    if curParent == -1 then //not in tree
      return -1; //something wrong with the tree

    while curParent != root {
      curParent = parents[curParent];
      lvl += 1;
      if curParent == -1 then //parent is not in tree(error)
        return -2;
    }
    return lvl;
  }
}

proc main(){

  var t = new Timer();
  var startTime = 0.0, stopTime = 0.0;

  //kernel 1
  writeln("Creating input graph");
  t.start();
  var g = createGraph500(scale=scale, edgefactor=edgefactor);
  t.stop();
  writeln("Graph created successfully");

  var constructionTime = t.elapsed();
  t.clear();

  /*if debug {*/
  /*writeln("Topology:");*/
  /*g.print();*/


  /*writeln("BF order:");*/
  /*for v in g.parBfIterator_parent_vertex() {*/
  /*writeln(v);*/
  /*}*/
  /*}*/

  //sample 64 search keys
  var sampleKeys: [0..#numSampleKeys] int;
  var r = new RandomStream(int, seed=13);
  var keysCreated = 0;
  for i in 0..#(1<<scale) { //blergh
    var key = (abs(r.getNext())%(1<<scale)):int;

    //check if vertex is trivial
    if numActualNeighbors(g, key) == 0 then continue;

    sampleKeys[keysCreated] = key;
    keysCreated += 1;

    if keysCreated == numSampleKeys then
      break;
  }

  //kernel 2 - timed
  var parents: [0..#(1<<scale)] int = -1;

  var traversedEdges: [0..#keysCreated] int;
  var times: [0..#keysCreated] real;
  var teps: [0..#keysCreated] real;

  if debugKey != -1 {
    writeln("Starting");
    t.start();
    getBFSParentArray(g, debugKey, parents);
    t.stop();

    if debug then [i in parents.domain] writeln(i, " ", parents[i]);

    if validation then write(if validate(g, debugKey, parents) then "Success\t\t" else "FAIL\t\t");

    /*writeln("Parents");*/
    /*[i in parents.domain] writeln(i, " ", parents[i]);*/
    /*writeln("Topology");*/
    /*g.print();*/
    /*writeln("Schedule");*/
    /*[i in vertexSpace] writeln(i, " ", g.bfs_state.scheduled$[i].read());*/
  }
  else {
    writef("\n\n%3s %10s %10s %10s %10s %15s %10s\n", "#", "Vertice ID", "|e|", "|v|",
        "time", "TEPS", "Valid");
    for i in 0..#keysCreated {
      parents = -1;

      writef("%3i %10i ", i, sampleKeys[i]);

      t.start();
      getBFSParentArray(g, sampleKeys[i], parents);
      t.stop();


      var (tn, te) = getBFSStats(parents, g);

      writef("%10i %10i ", te, tn);
      writef("%10.06r %15.6er", t.elapsed(), te/t.elapsed());

      /*writeln("Parents: \n", parents);*/
      if validation then writef("%10s",
          if validate(g, sampleKeys[i], parents)
          then "Success"
          else "FAIL");
      else
        writef("%10s", "N/A");

      /*if detailed then write(getNumAloneVertices(g) + "\n"); else writeln();*/
      writeln();

      times[i] = t.elapsed();
      traversedEdges[i] = te;
      teps[i] = te/t.elapsed();
      t.clear();
    }

    //calculate and print out stats
    writeln("\n\n********** REPORT **********");

    //general stuff
    writef("%20s:\t%i\n", "Scale:", scale);
    writef("%20s:\t%i\n", "Edgefactor:", edgefactor);
    writef("%20s:\t%i\n", "NBFS:", keysCreated);
    writef("%20s:\t%r\n", "Construction time:", constructionTime);

    //performance
    var minTime = min reduce times;
    var firstQTime = times[keysCreated/4];
    var medianTime = times[keysCreated/2];
    var thirdQTime = times[keysCreated/4*3];
    var maxTime = max reduce times;

    var meanTime = (+ reduce times)/keysCreated;
    var varTime = (+ reduce ([t in times] (t-meanTime)*(t-meanTime)))/keysCreated;
    var stdTime = sqrt(varTime);

    writeln();
    writef("%20s:\t%r\n", "Min Time:", minTime);
    writef("%20s:\t%r\n", "Q1 Time:", firstQTime);
    writef("%20s:\t%r\n", "Median Time:", medianTime);
    writef("%20s:\t%r\n", "Q3 Time:", thirdQTime);
    writef("%20s:\t%r\n", "Max Time:", maxTime);

    writef("%20s:\t%r\n", "Mean Time:", meanTime);
    writef("%20s:\t%r\n", "Var Time:", varTime);
    writef("%20s:\t%dr\n", "StdDev Time:", stdTime);

    var minNEdges = min reduce traversedEdges;
    var firstQNEdges = traversedEdges[keysCreated/4];
    var medianNEdges = traversedEdges[keysCreated/2];
    var thirdQNEdges = traversedEdges[keysCreated/4*3];
    var maxNEdges = max reduce traversedEdges;

    var meanNEdges = (+ reduce traversedEdges)/keysCreated;
    var varNEdges = (+ reduce ([t in traversedEdges]
          1.0*(t-meanNEdges)*(t-meanNEdges)))/keysCreated;
    var stdNEdges = sqrt(varNEdges);

    writeln();
    writef("%20s:\t%r\n", "Min NEdges:", minNEdges);
    writef("%20s:\t%r\n", "Q1 NEdges:", firstQNEdges);
    writef("%20s:\t%r\n", "Median NEdges:", medianNEdges);
    writef("%20s:\t%r\n", "Q3 NEdges:", thirdQNEdges);
    writef("%20s:\t%r\n", "Max NEdges:", maxNEdges);

    writef("%20s:\t%r\n", "Mean NEdges:", meanNEdges);
    writef("%20s:\t%r\n", "Var NEdges:", varNEdges);
    writef("%20s:\t%r\n", "StdDev NEdges:", stdNEdges);

    var minTeps = min reduce teps;
    var firstQTeps = teps[keysCreated/4];
    var medianTeps = teps[keysCreated/2];
    var thirdQTeps = teps[keysCreated/4*3];
    var maxTeps = max reduce teps;

    var harmonicMeanTeps = keysCreated / (+ reduce (1/teps) );
    var harmonicStdDevTeps = sqrt( (+ reduce (1/teps-1/harmonicMeanTeps)) /
        (keysCreated-1) ) * harmonicMeanTeps*harmonicMeanTeps;

    writeln();
    writef("%20s:\t%r\n", "Min Teps:", minTeps);
    writef("%20s:\t%r\n", "Q1 Teps:", firstQTeps);
    writef("%20s:\t%r\n", "Median Teps:", medianTeps);
    writef("%20s:\t%r\n", "Q3 Teps:", thirdQTeps);
    writef("%20s:\t%r\n", "Max Teps:", maxTeps);

    writef("%20s:\t%r\n", "Harm. Mean Teps:", harmonicMeanTeps);
    writef("%20s:\t%r\n", "Harm. StdDev Teps:", harmonicStdDevTeps);

  }

}

iter SparseBlockDom.dimIter(param dim, idx) {
  var targetLocRow = dist.targetLocsIdx((idx, whole.dim(2).low));
  /*writeln("dimIter idx: ", idx, " targetLocRow ", targetLocRow);*/

  for l in dist.targetLocales.domain.dim(2) {
    for i in locDoms[(targetLocRow[1], l)].mySparseBlock.dimIter(2, idx) {
      yield i;
    }
  }
}
