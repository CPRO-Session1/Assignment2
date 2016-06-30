/* Christopher Liu - Generates a random number, mods to 10, adds one. Then continually takes guesses from user, checks to see if too high or low, until they get it right. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user_guess;
	srand(time(0));
	int rand_num = rand();
	rand_num %= 10;
	++rand_num;

	while (user_guess != rand_num)
	{
		printf("Enter your guess: ");
		scanf("%d", &user_guess);
		if (user_guess < rand_num)
			printf("Your guess is too low.\n");
		else if (user_guess > rand_num)
			printf("Your guess is too high.\n");
		else
		{
			printf("Your guess is correct!");
		}
	}
	return 0;
}

