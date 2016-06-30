//Write a program to check if a user-input number is positive or negative. Assume the user enters a valid number, but that number may not be an integer. File name is your choice, as long as it makes sense.

#include<stdio.h>
int main(){
	float x;
	scanf("%f",&x);
	if (x > 0){
		printf("x is positive");
	}else if (x < 0){
		printf("x is negative");
	}else if (x==0){
		printf("x is neither");
	}
}
