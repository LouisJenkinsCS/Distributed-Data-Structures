SRC = $(shell find . -name *.chpl)
OUT = bin/main.exe
CHPLFLAGS = --fast --devel
EXTRAFLAGS =

# CHPLFLAGS can be used to add additional compiler flags to Chapel


# Raw Microbenchmark
Benchmark:
	chpl ${CHPLFLAGS} queues/Queue.chpl queues/local/SyncList.chpl queues/local/SyncQueue.chpl \
	queues/local/CCQueue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	queues/distributed/DistributedQueue.chpl benchmark/benchmark.chpl misc/LocalAtomicObject.chpl \
	queues/distributed/FCHQueue.chpl misc/FCHLock.chpl misc/Bitmap.chpl misc/GDT.chpl \
	-o $(OUT) --main-module benchmark ${EXTRAFLAGS}

# NQueens Benchmark
NQueens:
	chpl ${CHPLFLAGS} queues/Queue.chpl queues/local/SyncList.chpl queues/local/SyncQueue.chpl \
	queues/local/CCQueue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	queues/distributed/DistributedQueue.chpl benchmark/NQueens.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module NQueens ${EXTRAFLAGS}

# Proof of Correctness Test for CCQueue...
CCQueue:
	chpl ${CHPLFLAGS} queues/local/CCQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module CCQueue ${EXTRAFLAGS}

# Proof of Correctness Test for SyncList...
SyncList:
	chpl ${CHPLFLAGS} queues/local/SyncList.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module SyncList ${EXTRAFLAGS}

# Proof of Correctness Test for SyncQueue...
SyncQueue:
	chpl ${CHPLFLAGS} queues/local/SyncQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
	-o $(OUT) --main-module SyncQueue ${EXTRAFLAGS}

# Proof of Correctness Test for FCHQueue...
FCHQueue:
		chpl ${CHPLFLAGS} queues/distributed/FCHQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl \
		misc/FCHLock.chpl misc/Bitmap.chpl misc/GDT.chpl \
		-o $(OUT) --main-module FCHQueue ${EXTRAFLAGS}

# Proof of Correctness Test for FIFO...
FIFO:
	chpl ${CHPLFLAGS} queues/Queue.chpl queues/distributed/DistributedFIFOQueue.chpl \
	misc/LocalAtomicObject.chpl queues/local/SyncQueue.chpl \
	-o $(OUT) --main-module DistributedFIFOQueue ${EXTRAFLAGS}

# Proof of Correctness Test for MPMC...
MPMC:
	chpl ${CHPLFLAGS} queues/Queue.chpl queues/distributed/DistributedQueue.chpl \
	-o $(OUT) --main-module DistributedQueue ${EXTRAFLAGS}

clean:
	rm $(OUT) $(OUT)_real
