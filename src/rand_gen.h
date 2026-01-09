#ifndef RAND_GEN_H 
#define RAND_GEN_H  

unsigned long linearCongruentialGenerator();
void set_seed();
int randomNumberGenerator(int lower_bound, int upper_bound);

#endif