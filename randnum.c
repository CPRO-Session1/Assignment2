#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int r = rand() % 10 + 1;

	printf ("Type in a guess for the random number that was generated.\n");
	int g;
	scanf ("%d",&g);
	if (g > r)
		printf ("too high\n");
	else if (g <r) 
		printf ("too low\n");
	else 
		printf ("You guessed correctly!\n");
	return 0;
}
