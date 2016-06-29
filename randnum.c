#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	srand(time(0));
	int r = rand();

	int x;

	while(r>10)
		r = r/10;

	printf("Choose a number between 1 and 10. \n");

	scanf("%d", &x);

	if(r>x)
		printf("your guess is too low.\n");
	if(r<x)
		printf("your guess is too high.\n");
	if(r == x)
		printf("you guessed the number!\n");

	return 0;

}
