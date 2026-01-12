#ifndef MAIN_GAME_H
#define MAIN_GAME_H

int getPlayerChoiceEndless();
int getComputerChoice();
int getPlayerChoice();
char* moveName(int move);
void determineWinnerEndless(int player, int computer);
int determineWinner(int player, int computer);

int gameMenu();
void bestOfThree();
void endless();
void start();

#endif