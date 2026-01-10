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
    printf("\n");
    return choice;
}
//note to self: improve efficiency of this function later by adding nested switch statements
void determineWinner(int player, int computer){
    switch(player){
        case 1 : 
            switch(computer){
                case 1 : printf("It's a DRAW !!"); break;
                case 2 : printf("Computer WINS !!"); break;
                case 3 : printf("You WIN!!!"); break;
            } break;
        case 2 : 
            switch(computer){
                case 1 : printf("You WIN!!!"); break;
                case 2 : printf("It's a DRAW !!"); break;
                case 3 : printf("Computer WINS !!"); break;
            } break;
        case 3 :
            switch(computer){
                case 1 : printf("Computer WINS !!"); break;
                case 2 : printf("You WIN!!!"); break;
                case 3 : printf("It's a DRAW !!"); break;
            } break;
        default : printf("Please enter a valid option only.");
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
//note to self: can strive for cleaner code by moving the game loop to a separate function
//add exit button aka fix the exit condition
//future features: add a way to keep score
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