#ifndef GAMEFUNCTIONS_H
#define GAMEFUNCTIONS_H

#include <windows.h>

extern bool isContinuePlay;
typedef struct{
	char playerInitial;
	int playerDiceCount;
	int playerPosition;
	int playerChoice_2;
}players;

void startGame(players *p1, players *p2);

#endif