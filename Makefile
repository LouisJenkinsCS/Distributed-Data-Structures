SRC = $(shell find . -name *.chpl)
OUT = bin/main.exe
CFLAGS = --fast --devel

# CFLAGS can be used to add additional compiler flags to Chapel


# Raw Microbenchmark
Benchmark:
	chpl ${CFLAGS} queues/Queue.chpl queues/local/SyncList.chpl queues/local/SyncQueue.chpl \
	queues/local/CCQueue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	queues/distributed/DistributedQueue.chpl benchmark/benchmark.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module benchmark

# NQueens Benchmark
NQueens:
	chpl ${CFLAGS} queues/Queue.chpl queues/local/SyncList.chpl queues/local/SyncQueue.chpl \
	queues/local/CCQueue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	queues/distributed/DistributedQueue.chpl benchmark/NQueens.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module NQueens

# Proof of Correctness Test for CCQueue...
CCQueue:
	chpl ${CFLAGS} queues/local/CCQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module CCQueue

# Proof of Correctness Test for SyncList...
SyncList:
	chpl ${CFLAGS} queues/local/SyncList.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module SyncList

# Proof of Correctness Test for SyncQueue...
SyncQueue:
	chpl ${CFLAGS} queues/local/SyncQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module SyncQueue

# Proof of Correctness Test for FIFO...
FIFO:
	chpl ${CFLAGS} queues/Queue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	misc/LocalAtomicObject.chpl queues/local/SyncQueue.chpl \
	-o $(OUT) --main-module DistributedFIFOQueue

# Proof of Correctness Test for MPMC...
MPMC:
	chpl ${CFLAGS} queues/Queue.chpl queues/distributed/DistributedQueue.chpl \
	-o $(OUT) --main-module DistributedQueue

clean:
	rm $(OUT) $(OUT)_real
