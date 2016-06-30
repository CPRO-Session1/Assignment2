#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int r = rand()%11;
	printf("A random number has been generated from 1 to 10, please type a number to guess \n");
	int x;
	scanf("%d" , &x);
	if (x==r){
		printf("You guessed correct!");
	}else if (x>r){
		printf("Your number is too big");
	}	else if (x<r){
		printf("Your number is too small");
	}
}
