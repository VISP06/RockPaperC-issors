#include<stdio.h>
#include<stdlib.h>
#include "rand_gen.h"

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