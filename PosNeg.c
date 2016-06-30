//Clarke Littlejohn
// This is  the Code to see if a number is positive or negative

#include <stdio.h>
	


int main(){
	int posneg;
	printf("Enter in a number to see if it positive or negative\n");
	scanf("%d",&posneg);
	if(posneg==0)
		printf("0 is not positive or negative\n");
	else{
		if(posneg<0)
			printf("%d is negative\n",posneg);
		else 
			printf("%d is postive\n",posneg);
	}
}
