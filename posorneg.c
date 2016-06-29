/*
*Emma Ladouceur
*This program determines whether or not a number is positive or negative
*/

#include <stdio.h>

int main (){

	printf("Enter a number ");
	float x;
	scanf("%f", &x);

	if(x<0){
	printf("your number is negative!\n");
	}

	else
	printf("your number is positive!\n");

	return 0;
}


