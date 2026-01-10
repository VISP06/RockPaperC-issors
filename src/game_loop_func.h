#ifndef GAME_LOOP_FUNC_H
#define GAME_LOOP_FUNC_H

int getComputerChoice();
int getPlayerChoice();
char* moveName(int move);
void determineWinner(int player, int computer);
void start();

#endif