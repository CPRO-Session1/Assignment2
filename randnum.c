#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int r = rand() % (10 + 1 - 1) + 1;
	printf("Guess an integer between 1 and 10.\n");
	int guess;
	scanf("%d", &guess);
	if (guess>r)
		printf("Sorry, your guess of %d is too high.\n", guess);
	if (guess<r)
		printf("Sorry, your guess of %d is too low.\n", guess);
	if (guess==r)
		printf("Congratulations! Your guess of %d is correct!\n", guess);
	return 0;
}

