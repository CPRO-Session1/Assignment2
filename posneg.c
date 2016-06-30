/* Matthew Danielson 
*  6/29/16
*  posneg.c
*  Evalutes whether or not an integer is positive or negative
*/
#include <stdio.h>

int main(){
	int x;
	printf("Please enter an integer: ");
	scanf("%d",&x);
	if(x > 0)
		printf("\nThis number is positive.");
	else
		printf("\nThis number is negative.");

	return 0;

}
