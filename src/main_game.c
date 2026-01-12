#include "universal.h"

int getComputerChoice(){
    set_seed();
    return randomNumberGenerator(1, 3);
}

char* moveName(int move){
    switch(move){
        case 1 : return "Rock!";
        case 2 : return "Paper!";
        case 3 : return "Scissors!";
        default : printf("Experiencing Technical Difficulties.\n");
    }
}

int gameMenu(){
    printf("\t\t____Welcome to Rock-Paper-Scissors____");
    printf("\n\t\t\t  ++++Game Menu++++\n");
    printf("\t\t\t     1. Best of 3\n");
    printf("\t\t\t     2. Endless\n");
    printf("\t\t\t     3. Exit\n");
    int menuChoice;
    printf("\t\t    Tell us what you wanna play: ");
    scanf("%d", &menuChoice);
    printf("\n");
    return menuChoice;  
}

void start(){
    int modeChoice = gameMenu();
    switch(modeChoice){
        case 1 : bestOfThree(); break;
        case 2 : endless(); break;
        case 3 : exit(1);
        default : printf("Please pick anyone of the options only.");
    }
    return;
}
