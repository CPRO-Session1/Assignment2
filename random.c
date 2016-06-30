/*Matthew Danielson
* 6/29/16
* Random.c
*Generates a random number to be generated
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int randint = rand();
	int randint2 = randint%10 ;
	randint2 ++;
	int num = 1;
	int guess;
	while(num){
		printf("Please enter a guess:\n ");
		scanf("%d ", &guess);
		if(guess == randint2){
			printf("That's correct!");
			num = 0;}
		else
			printf("Incorrect. \n");
	}

	return 0;
}
