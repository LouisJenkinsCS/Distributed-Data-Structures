#include <stdint.h>

struct uint128 {
    uint64_t lo;
    uint64_t hi;
};

typedef struct uint128 uint128_t;

int cmpxchg16b(void *, void *, void *);

int cmpxchg16b(void *srcvp, void *cmpvp, void *withvp)
{
    uint128_t *src = (uint128_t *) srcvp;
    uint128_t *cmp = (uint128_t *) cmpvp;
    uint128_t *with = (uint128_t *) withvp;
    /*{{{*/
    char result;

    // (AT&T syntax)
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
    /* (Intel syntax)
     * __asm__ __volatile__
     * (
     *  "lock cmpxchg16b oword ptr %1\n\t"
     *  "setz %0"
     *  : "=q" ( result )
     *  , "+m" ( *src )
     *  , "+d" ( cmp->hi )
     *  , "+a" ( cmp->lo )
     *  : "c" ( with->hi )
     *  , "b" ( with->lo )
     *  : "cc"
     * );    */
    return result;
} /*}}}*/
