/*Ava N.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	srand(time(0));
	int r=rand() %10 + 1; 
	/*printf("%d", r);*/ /*This was checking to make sure that only numbers 1-10 were being generated as a random.*/
	int g; /*g=user's guess*/
	printf("Can you guess what random number between 1-10 the computer has generated? \n");
	scanf("%d", &g);
		if (g==r){
			printf("You're a genius! That was the correct answer! \n");
		}
		
		else if(g>r){
			printf("You're number was too high! Try again next time. \n");
		}
		
		else if(g<r){
			printf("You're number was too low! Try again next time. \n");
		}

		else {
			printf("You entered an incorrect value. Try again next time. \n");
		}

	return 0;
}
