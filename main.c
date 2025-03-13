#include "main.h"
bool isContinue = true;
int main(){
	int playerChoice_1;
	players p1, p2;
	while(isContinue){
		printf("Welcome to Snakes & Ladders!\n");
		printf("1.Start Game\n");
		printf("2.View Rules\n");
		printf("3.Exit\n");
		scanf("%d", &playerChoice_1);
		switch(playerChoice_1){
			case 1:
				startGame(&p1, &p2);
				break;
			case 2:
				//viewRules();
				break;
			case 3:
				isContinue = false;
				break;
			default:
				printf("Enter a valid option!\n");
				scanf("%d", &playerChoice_1);	
		}
			
	}
	printf("Exiting.....");
}