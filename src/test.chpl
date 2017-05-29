use Distributed_FIFO;

writeln("Started...");
var q = new Distributed_FIFO(int);
for i in 1..10 do q.enqueue_async(i);
q.flush();
