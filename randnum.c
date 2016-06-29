#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int r = rand();
	while (r > 10)
	{
		r /= 10;
	}
	int guess;
	printf("Guess a number between  1 and 10, inclusive.\n");
	scanf("%d",&guess);
	if (guess == r)
	{
		printf("You are correct\n");
	}
	else if (guess >= r) {
		printf("Your guess was too high\n");
	}
	else if (guess <= r) {
		printf("Your guess was too low\n");
	}
	return 0;
}
