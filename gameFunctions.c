#include "main.h"

bool rollDice(struct players p){
	printf("Roll your dice by pressing \'1\'\n");
	scanf("%d", &p.playerChoice_2);
	if(p.playerChoice_2 == 1){
		printf("\nRolling.....");
		p1.playerDiceCount = generateDiceCount();
		sleep(2);
		printf("%c, your dice count is %d!", p1.playerInitial, p1.playerDiceCount);
		if(checkForSnakeBite()){
		}
		if(winCheck()){
		}
		printf("You are Moving forward");
		updateAndDisplay();
	}
	else
		return false;
}


void startGame(players *p1, players *p2){
	printf("#Player 1 type your Initial: ");
	scanf("%c", p1->playerInitial);
	printf("\n#Player 2 type your Initial: ");
	scanf("%c", p2->playerInitial);
	printf("LETS PLAY!!!!!\n");
	printf("This is the Board\n");
	displayBoard();
	printf("NOTE: Players can exit anytime by pressing \'0\'");
	while(isContinuePlay){
		if(rollDice(p1)){
		}
		else{
			isContinuePlay = false;
			isContinue = false;
		}
	}
	
}