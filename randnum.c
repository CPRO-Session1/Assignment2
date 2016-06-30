#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int r = rand() %10+1;
printf("Guessing game: Guess a number between 1 and 10\n");
int g;
scanf("%d", &g);
if (g > r) {
	printf("Incorrect. Your guess was too high.\n");
}
if (g < r) {
	printf("Incorrect. Your guess was too low.\n");
}
if (g == r) {
	printf("Correct!");
}
return 0;
}
