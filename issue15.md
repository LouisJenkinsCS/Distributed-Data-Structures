## Global Atomic Object

I present the `GlobalAtomicObject`, the first of it's kind to allow atomic operations
on class instances (128-bit wide pointers)! `GlobalAtomicObject` currently suffers
from poor optimizations due to lack of time, but it sure is promising! I compare it's
performance against 'Sync Var', the all-mighty `sync` var, which currently gets a handicap by
just acquiring the lock, perform some arbitrary cheap operation, then immediately release it.
This is the 'baseline' which we must beat or else the implementation is useless.
The next is `Atomic` on a 64-bit value, which is the 'ceiling', and can be seen as how
much performance we can get for normal pointer compression versus keeping tables like this.
It has two benchmarks: 'single' which is a single atomic operation, and 'LLSC' which is
a pseudo Load-Linked Store-Conditional operation. LLSC looks like such...

```chpl
var x = atomicVar.read();
atomicVar.compareExchangeStrong(x, f(x));
```

There is no retrying, just a one-and-done atomic operation (which I count as one).
In 'Global Atomic', we use similar atomic operations as 'Atomic' does, although
a few things need to be considered. While for 'Single', it performs a `write`
(because a `read` is not interesting since it is a basic lookup in a locale's table),
for data in *local* memory, which shows the ideal. Now 'LLSC' can perform operations for
data that is *remote*, meaning that each time, its possible that during compression
of the data, we may need to jump to other locales. It shows a more average case, but
not the worse case when data to `compareExchangeStrong` is both remote. Currently,
'LLSC' for `GlobalAtomicObject` demonstrates 3 atomic operations: the `read` which
is a simple lookup, and compression of both variables passed to `compareExchangeStrong`
which one is local, the other remote.

It should be noted again that with pointer compression and a smaller number of nodes,
performance is excellent. However, when one has more than the maximum allowed, it is
still manageable and *better* than a `sync` variable is.

### Performance
