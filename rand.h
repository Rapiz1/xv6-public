#define _PRNG_MOD 10000139
#define _PRNG_FACTOR 10000103
#define _PRNG_DELTA 10000019

#define RAND_MAX PRNG_MOD

void srand(uint seed);
uint rand(void);
