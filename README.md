# Distributed Data Structures

This repository hosts the first framework for distributed data structures for the
Chapel programming language. Here we introduce a 'Collections API', based on Java's
Collections framework, as well as some data structures, some distributed, others
local.

## Performance Testing

All benchmarks performed on a Cray-XC40 cluster.

## Queues

Provides a strict FIFO ordering without sacrificing too much performance. The FIFO ordering
is preserved across all nodes in a cluster, and employs a wait-free round-robin approach
to load distribution that ensures fairness in memory, bandwidth, and computation.

**Disclaimer:** The queues provided, while scalable, are communication bound and
as such the performance is bound by network limitations. This is unavoidable.

## MultiSet

With performance that scales both in the number of nodes in a cluster and the
number of cores per node, we offer a multiset implementation, called a 'Bag',
which is a medium that allows storing and retrieving data in any arbitrary order.
This type of data structure is ideal for work queues as it employs it's own load
balancing, and offers unparalleled performance.

**Disclaimer:** As Chapel does not support privatization of class fields, if the
user is to use a `DistributedBag`, then they must request a `localBag` to use to
avoid excess communications from accessing class fields. This is because,
there will be a 'GET' operation to the node that allocated the queue, which bounds
performance to network limitations. The benchmark results below show performance
using `localBag` directly.

### Performance

We compare our data structures to a naive synchronized list implementation
as that is all that is available. In all cases, the data structures scale and
outperform the naive implementation by far.

#### Insert

Implementation | Performance over Naive
-------------- | :-----------:
SynchronizedList | 100%
DistributedBoundedQueue | 6233.1%
DistributedQueue | 3638%
DistributedBag | 40323%

![](Results/Collections_Add.png)

#### Remove

In this benchmark, we test raw removal time. In the case of DistributedBag, we have
two variants; one which tests remove when it is already load balanced (as in we
fill the bag ahead of time in a fairly distributed manner), given a `(Balanced)` suffix,
and one which is not all too uncommon, where we add all elements to a single node
causing an artificial imbalance, which tests how the bag performs in the worst case.

Implementation | Performance over Naive
-------------- | :-----------:
SynchronizedList | 100%
DistributedBoundedQueue | 9345.4%
DistributedQueue | 6225.1%
DistributedBag (Imbalanced) | 18853%
DistributedBag (Balanced) | 50330%

![](Results/Collections_Remove.png)
