#include "universal.h"

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

int determineWinner(int player, int computer){
    switch(player){
        case 1 : 
            switch(computer){
                case 1 : return 1; //draw
                case 2 : return 2; //computer wins
                case 3 : return 3; //player wins
            } break;
        case 2 : 
            switch(computer){
                case 1 : return 3;
                case 2 : return 1;
                case 3 : return 2;
            } break;
        case 3 :
            switch(computer){
                case 1 : return 2;
                case 2 : return 3;
                case 3 : return 1;
            } break;
        default : printf("Please enter a valid option only.");
    }
    return 0;
}


void bestOfThree(){
    int playerWinCount = 0;
    int computerWinCount = 0;
    printf("________________________________________________________________________________\n");
    do{
        if(playerWinCount == 3 || computerWinCount == 3){
            printf("\n\t\t\t\tScoreboard:\n\t\t\t\tPlayer = %d\n\t\t\t\tComputer = %d\n\n", playerWinCount, computerWinCount);
            break;
        }
        printf("\n\t\t\t\tScoreboard:\n\t\t\t\tPlayer = %d\n\t\t\t\tComputer = %d\n", playerWinCount, computerWinCount);
        int computerChoice = getComputerChoice();
        int playerChoice = getPlayerChoice();

        char * computerMove = moveName(computerChoice);
        char * playerMove = moveName(playerChoice);
        printf("You -> %s\n", playerMove);
        printf("Computer -> %s\n", computerMove);

        int res = determineWinner(playerChoice, computerChoice);
        if(res == 2){
            printf("COMPUTER WINS!\n");
            computerWinCount++;
        }else if(res == 3){
            printf("PLAYER WINS!\n");
            playerWinCount++;
        }else{
            printf("It's a DRAW !!\n");
            playerWinCount++;
            computerWinCount++;
        }
        printf("\n");
        
        printf("________________________________________________________________________________\n");
    }while(1);
    printf("********************************************************************************\n");
    if(playerWinCount == 3){
        printf("\t\t\t    PLAYER WINS THE SET!!!\n");
    }else if(computerWinCount == 3){
        printf("\t\t\t    COMPUTER WINS THE SET!!\n");
    }else{
        printf("\t\t\t    IT'S A DRAW!!!\n");
    }
    printf("********************************************************************************\n");
    start();
}

