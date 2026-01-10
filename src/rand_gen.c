#include "universal.h"
unsigned long seed = 12345;

void set_seed(){
    seed = (unsigned long)time(NULL);
}

unsigned long linearCongruentialGenerator(){
    unsigned long  a = 1103515245;
    unsigned long  c = 12345;
    unsigned long  m = 2147483648;
    seed = (seed*a+c)%m;
    return seed;
}

int randomNumberGenerator(int lower_bound, int upper_bound){
    int rangeSize = upper_bound - lower_bound + 1;
    unsigned long lcg_value = linearCongruentialGenerator();
    return (lcg_value % rangeSize)+lower_bound;
}
