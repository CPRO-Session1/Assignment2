#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
	srand(time(0));
	int ans = rand() % 11;
	printf("Guess a number from 1-11: \n");
	int userGuess;
	scanf("%d", &userGuess);
	while (userGuess != ans){
		if (userGuess > ans){
			printf("Your guess is too high. Guess again: \n");
		}
		if (userGuess < ans){
			printf("Your guess is too low. Guess again: \n");
		}
		scanf("%d", &userGuess);
	}
	printf("Correct, congratulations! \n");
	return 0;
}
