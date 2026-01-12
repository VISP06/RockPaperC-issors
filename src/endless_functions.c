#include "universal.h"

int getPlayerChoiceEndless(){
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


void determineWinnerEndless(int player, int computer){
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
        default : printf("\nPlease enter a valid option only.\n");
    }
}

void endless(){
    printf("________________________________________________________________________________\n");
    do{
        int computerChoice = getComputerChoice();
        int playerChoice = getPlayerChoiceEndless();
        if(playerChoice != 1 && playerChoice !=2 && playerChoice !=3){
            if(playerChoice == 4){
                printf("Thank you for playing :)\n\n");
                break;
            }else{
                printf("\nPlease enter a valid option only.\n\n");
                break;
            }
        }
        char * computerMove = moveName(computerChoice);
        char * playerMove = moveName(playerChoice);
        printf("You -> %s\n", playerMove);
        printf("Computer -> %s\n", computerMove);

        printf("\n");        
        determineWinnerEndless(playerChoice, computerChoice);
        printf("\n");
        
        printf("________________________________________________________________________________\n");
    }while(1);
    start();
}