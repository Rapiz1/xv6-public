#include "rand.h"
#include "types.h"

uint prng_seed;

void srand(uint seed) {
  prng_seed = seed;
}

uint rand(void) {
  return prng_seed = (prng_seed*_PRNG_FACTOR + _PRNG_DELTA)%_PRNG_MOD;
}
