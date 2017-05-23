#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

/*
  A Multiword Compare-And-Swap algorithm, defined in "Practical lock-freedom" chapter 3.2
*/

#define UNDECIDED 0
#define FAILED 1
#define SUCCESSFUL 2

typedef uint64_t word_t;

typedef struct {
  // Number of logical locations
  int N;
  // Address
  word_t **a;
  // Expected
  word_t *e;
  // New
  word_t *n;
  // UNDECIDED, FAILED, SUCCESSFUL
  word_t status;
} MCASDesc;

static int AddressCompare(const void *addr1, const void *addr2);
static void AddressSort(MCASDesc *d);

// Performs a multiword compare and swap on N positions, where for each
// i in [1..N], where a[i], e[i], and n[i] correspond to each other;
// atomic { if a[i] == e[i] then a[i] = n[i]; }
// We use descriptors so that MCASHelper can allow recursive helping.
bool MCAS(int N, word_t **a, word_t *e, word_t *n);

// Note that MCASRead will ONLY work if the address being read is manage properly
// through the MCASDesc abstraction!
word_t MCASRead(word_t *a);

// A recursive helper algorithm; each thread will attempt to set their descriptor to
// claim ownership of a contested location; if another descriptor is encountered,
// then that thread helps to ensure that progress is made.
bool MCASHelp(MCASDesc *d);

static int AddressCompare(const void *addr1, const void *addr2) {
  return (uintptr_t) addr1 - (uintptr_t) addr2;
}

static void AddressSort(MCASDesc *d) {
  qsort(d->a, d->N, sizeof(word_t), AddressCompare);
}



bool MCAS(int N, word_t **a, word_t *e, word_t *n) {
  MCASDesc *d =  malloc(sizeof(*d));
  d->N = N;
  d->a = a;
  d->e = e;
  d->n = n;

  // Impose a global acquisition order to avoid deadlock
  AddressSort(d);
  return MCASHelp(d);
}
