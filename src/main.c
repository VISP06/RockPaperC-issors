#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

int getComputerChoice(){
    int low = 1;
    int high = 3;
    return randomNumberGenerator(1, 3);
}

int getPlayerChoice(){
    int choice;
    printf("\n");
    printf("Choose one among the following: \n");
    printf("------------------------------------------\n");
    printf("1-Rock\t\t2-Paper\t\t3-Scissors\n");
    printf("------------------------------------------\n");
    printf("Enter in your choice: ");
    scanf("%d", &choice);
    return choice;
}

void determineWinner(int player, int computer){

}

const char* moveName(int move){
    
}

int main(void){
    int num = getComputerChoice();
    printf("%d", num);
    return 0;
}