#include "main.h"

bool rollDice(players *p){
	printf("Roll your dice by pressing \'1\'\n");
	scanf("%d", &p->playerChoice_2);
	if(p->playerChoice_2 == 1){
		printf("Rolling.....\n");
		/*p->playerDiceCount = generateDiceCount();
		sleep(2);
		printf("%c, your dice count is %d!", p->playerInitial, p->playerDiceCount);
		if(checkForSnakeBite()){
		}
		if(winCheck()){
		}
		printf("You are Moving forward");
		updateAndDisplay();*/
		return true;
	}
	else
		return false;
}


void startGame(players *p1, players *p2){
	bool isContinuePlay = true;
	printf("#Player 1 type your Initial: ");
	scanf(" %c", &p1->playerInitial);
	printf("#Player 2 type your Initial: ");
	scanf(" %c", &p2->playerInitial);
	printf("LETS PLAY!!!!!\n");
	printf("This is the Board\n");
	//displayBoard();
	printf("NOTE: Players can exit anytime by pressing \'0\'\n");
	while(isContinuePlay){
		if(rollDice(p1)){
			printf("success\n");
		}
		else{
			isContinuePlay = false;
			isContinue = false;
		}
	}
	
}