#include "Atomic128bit.h"

inline int cas128bit(void *srcvp, void *cmpvp, void *withvp) {
  uint128_t *src = srcvp;
  uint128_t *cmp = cmpvp;
  uint128_t *with = withvp;
  char result;

  __asm__ __volatile__ ("lock; cmpxchg16b (%6);"
                        "setz %7; "
                        : "=a" (cmp->lo),
                        "=d" (cmp->hi)
                        : "0" (cmp->lo),
                        "1" (cmp->hi),
                        "b" (with->lo),
                        "c" (with->hi),
                        "r" (src),
                        "m" (result)
                        : "cc", "memory");

  return result;
}

inline void read128bit(void *srcvp, void *dstvp) {
  uint128_t *src = srcvp;
  uint128_t with_val = *src;
  uint128_t cmp_val;
  uint128_t *cmp = &cmp_val;
  uint128_t *with = &with_val;
  char result;

  __asm__ __volatile__ ("lock; cmpxchg16b (%6);"
                        "setz %7; "
                        : "=a" (cmp->lo),
                        "=d" (cmp->hi)
                        : "0" (cmp->lo),
                        "1" (cmp->hi),
                        "b" (with->lo),
                        "c" (with->hi),
                        "r" (src),
                        "m" (result)
                        : "cc", "memory");

  *(uint128_t *)dstvp = cmp_val;
}
