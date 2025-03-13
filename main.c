#include "main.h"
int main(){
	players p1, p2;
	while(isContinue){
		printf("Welcome to Snakes & Ladders!");
		printf("1.Start Game\n");
		printf("2.View Rules\n");
		printf("3.Exit\n");
		scanf("%d", &playerChoice);
		switch(playerChoice_1){
			case 1:
				startGame(&p1, &p2);
				break;
			case 2:
				viewRules();
				break;
			case 3:
				isContinue = false;
				printf("Exiting.....");
				break;
			default:
				printf("Enter a valid option!\n");
				scanf("%d", &playerChoice);	
		}
			
	}
	printf("Exiting.....");
}