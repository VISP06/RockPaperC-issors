#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "rand_gen.h"

int getComputerChoice(){
    set_seed();
    return randomNumberGenerator(1, 3);
}

int getPlayerChoice(){
    int choice;
    printf("\n");
    printf("Choose one among the following: \n");
    printf("\t\t------------------------------------------\n");
    printf("\t\t1-Rock\t\t2-Paper\t\t3-Scissors\n");
    printf("\t\t------------------------------------------\n");
    printf("Enter in your choice: ");
    scanf("%d", &choice);
    printf("\n\n");
    return choice;
}

void determineWinner(int player, int computer){
    if(player==computer){
        printf("It's a DRAW!!");
        return;
    }
    if(player == 1 && computer == 2){
        printf("Computer WINS!!");
        return;
    }else if(player == 2 && computer == 1){
        printf("You WIN !!!");
        return;
    }
    if(player == 2 && computer == 3){
        printf("Computer WINS!!");
        return;
    }else if(player == 3 && computer == 2){
        printf("You WIN!!!");
        return;
    }
    if(player == 3 && computer == 1){
        printf("You WIN!!!");
        return;
    }else if(player == 1 && computer == 3){
        printf("Computer WINS!!");
        return;
    }
}

const char* moveName(int move){
    switch(move){
        case 1 : return "Rock!";
        case 2 : return "Paper!";
        case 3 : return "Scissors!";
        default : printf("Experiencing Technical Difficulties.\n");
    }
}

int main(void){
    printf("________________________________________________________________________________\n");
    int playerChoice;
    do{
        
        int computerChoice = getComputerChoice();
        playerChoice = getPlayerChoice();
        char * computerMove = moveName(computerChoice);
        char * playerMove = moveName(playerChoice);
        printf("You -> \033[1m%s\033[0m\n", playerMove);
        printf("Computer -> \033[1m%s\033[0m\n", computerMove);
        printf("\n");
        determineWinner(playerChoice, computerChoice);
        printf("\n");
        printf("________________________________________________________________________________\n");
    }while(playerChoice != 4);
    return 0;
}