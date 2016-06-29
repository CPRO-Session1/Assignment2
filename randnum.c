/* This program guesses and random number
 * @author Emma Ladouceur
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	srand(time(0));
	int r = rand() % 10;
	int guess;
	printf("Try and guess the number! : ");
	scanf("%d", &guess);
	
	if(guess == r){
		printf("you're right!\n");
	}

	if(guess < r){

		printf("a little too low\n");
	}	
	if(guess > r) {
		printf("a little too high");

	}

	return 0;
	}
