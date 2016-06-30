/*Ava N.*/
#include <stdio.h>

int main() {

	float n; /*n for number*/
	printf("Write an integer and I will guess whether it is positive or negative! \n");
	scanf("%f", &n);
 

	if(n>0)
	{
		printf("You chose a positive number! \n");
	}
	
	else if(n<0)
	{
		printf("You chose a negative number! \n");
	}
	
	else if(n==0)
	{
		printf("You chose zero! \n");
	}
	
	else{
		printf("You did not choose a number!");
	}

	return 0;
}
