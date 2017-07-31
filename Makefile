SRC = $(shell find . -name *.chpl)
OUT = bin/main.exe
CHPLFLAGS = --fast --devel
EXTRAFLAGS =

# CHPLFLAGS can be used to add additional compiler flags to Chapel

DistributedBoundedQueue-Benchmark:
	chpl testing/Benchmark.chpl collections/DistributedBoundedQueue.chpl \
	testing/collections/DistributedBoundedQueueBenchmark.chpl testing/Plot.chpl collections/SynchronizedList.chpl \
	$(CHPLFLAGS) $(EXTRAFLAGS) --main-module DistributedBoundedQueueBenchmark -o $(OUT)

clean:
	rm $(OUT) $(OUT)_real
