#include <stdint.h>

struct uint128 {
    uint64_t lo;
    uint64_t hi;
};

typedef struct uint128 uint128_t;

int cas128bit(void *srcvp, void *cmpvp, void *withvp);
void read128bit(void *srcvp, void *dstvp);
