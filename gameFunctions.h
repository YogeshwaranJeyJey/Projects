#ifndef GAMEFUNCTIONS_H
#define GAMEFUNCTIONS_H

#include <windows.h>

bool isContinuePlay = true;
typedef struct{
	char playerInitial;
	int playerDiceCount;
	int playerPosition;
	int playerChoice_2;
}players;

void startGame();

#endif