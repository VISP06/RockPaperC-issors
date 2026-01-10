#include "universal.h"

int getComputerChoice(){
    set_seed();
    return randomNumberGenerator(1, 3);
}

int getPlayerChoice(){
    int choice;
    printf("\n");
    printf("Choose one among the following: \n");
    printf("\t\t--------------------------------------------------------------\n");
    printf("\t\t1-Rock\t\t2-Paper\t\t3-Scissors\t\t4-Exit\n");
    printf("\t\t--------------------------------------------------------------\n");
    printf("Enter in your choice: ");
    scanf("%d", &choice);
    printf("\n");
    return choice;
}

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

char* moveName(int move){
    switch(move){
        case 1 : return "Rock!";
        case 2 : return "Paper!";
        case 3 : return "Scissors!";
        default : printf("Experiencing Technical Difficulties.\n");
    }
}

void start(){
    printf("________________________________________________________________________________\n");
    do{
        int computerChoice = getComputerChoice();
        int playerChoice = getPlayerChoice();

        if(playerChoice == 4){
            printf("Thank you for playing :)\n");
            exit(1);
        }

        char * computerMove = moveName(computerChoice);
        char * playerMove = moveName(playerChoice);
        printf("You -> %s\n", playerMove);
        printf("Computer -> %s\n", computerMove);

        printf("\n");        
        determineWinner(playerChoice, computerChoice);
        printf("\n");
        
        printf("________________________________________________________________________________\n");
    }while(1);
}