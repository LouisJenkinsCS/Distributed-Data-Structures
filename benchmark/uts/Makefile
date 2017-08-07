CHPL     = chpl
CHPLFLAGS= -O --no-checks

TARGETS  = uts-rec uts-deq

all: $(TARGETS)

uts-rec: uts_rec.chpl sha1_rng.chpl brg_sha1.c brg_sha1.h
	$(CHPL) $(CHPLFLAGS) -o $@ -sparallel=true $+

uts-deq: uts_deq.chpl sha1_rng.chpl dequeue.chpl brg_sha1.c brg_sha1.h
	$(CHPL) $(CHPLFLAGS) -o $@ --main-module=uts_deq $+

uts_distributed: uts_distributed.chpl sha1_rng.chpl dequeue.chpl brg_sha1.c brg_sha1.h ../../queues/distributed/DistributedWorkQueue.chpl ../../queues/Queue.chpl
	$(CHPL) $(CHPLFLAGS) -o $@ --main-module=uts_distributed $+

clean:
	rm -f $(TARGETS)
