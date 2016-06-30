#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int r = (rand() % 10) + 1;
	printf("guess a number!\n");
	while(1){
		int guess;
		scanf("%d",&guess);
		if(guess > r){
			printf("Too high!\n");
		}else if(guess < r){
			printf("Too low!\n");
		}else{
			printf("Correct!\n");
			return 0;
		}
	}
}
