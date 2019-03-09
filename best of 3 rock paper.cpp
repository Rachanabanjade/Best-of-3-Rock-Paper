//WAP a program to implement the game “rock paper scissors”.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main() {
	
	int choice,comp_choice,win=0,loss=0,i;
	
	printf("Lets play the game:\n\n\n\n\n\n");
	

	
	printf("Its your choice:\n\n\n ");
	
	for(i=0;i<3;i++){
	
	
	printf("Enter 0 for Rock:\n\n\nEnter 1 for Paper:\n\n\nEnter 2 for scissors:\n\n\n");
	scanf("%d",&choice);
		srand(time(0));
	comp_choice=rand()%3;
		switch (choice){
			case 0:
				printf("ROCK");
				if(comp_choice==0){
				printf("Computer chooses rock:\nThe game is draw:\n");
			}else if(comp_choice==1){
				printf("Computer chooses paper:\n Paper wraps Rock.\nCONGRATULATION!!!\n YOU WON\n ");
				win++;
			}else if(comp_choice==2){
				printf("Computer chooses scissors:\n Rock breaks scissors:\n SORRY!!! :( \n YOU LOOSE");
				loss++;
			}
				break;
				
				
			case 1:
				printf("PAPER");
					if(comp_choice==0){
				printf("\nComputer chooses rock:\n Paper wraps Rock\n CONGRATULATION!!:\n YOU WON:\n");
				win++;
			}else if(comp_choice==1){
				printf("\nComputer chooses paper:\nThe game is draw\n ");
			
			}else if(comp_choice==2){
				printf("\nComputer chooses scissors:\n  scissors cuts paper:\n SORRY!!!  \n YOU LOOSE\n");
				loss++;
				
				break;
			}
			case 2:
				printf("SCISSORS");
						if(comp_choice==0){
				printf("\nComputer chooses rock:\n rock destroys scissors\n SORRY!!:\n YOU LOOSE:\n");
				loss++;
			}else if(comp_choice==1){
				printf("\nComputer chooses paper:\n Scissors cuts Paper\n CONGRATULATION YOU WON:\n ");
			win++;
			}else if(comp_choice==2){
				printf("\nComputer chooses scissors:\n  The game is draw:\n");
		
				break;
			}
			default:
				printf("WRONG CHOICE\n");
				break;
		}
}
    
	if(win>loss){
		printf("ULTIMATELY YOU WON:\n");
		
	}
	
	else{
		printf("you loose");
	}
		return 0;
	
								 
}



