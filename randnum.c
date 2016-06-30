//Bettina Benitez
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int r = rand () % 11; //picks a random number between 0 and 10 (11 numbers)
	int g; // user guessed number
	printf("Guess a number: ");
	scanf("%d", &g);
	if (g != r) { //this checks if the user's guess is the same as the random number
		if (g > r) {
			printf("Your guess is too high! Try again! \n");
			printf("Guess again: ");
			scanf("%d", &g); //repeats the question if guessed wrong
		}
		if (g < r) {
			printf("Your guess is too low! Try again: \n");
			printf("Guess again: ");
			scanf("%d", &g);
		}
	}
	if (g == r) {
		printf("You guessed the number! \n");
	}
	return 0;
}
