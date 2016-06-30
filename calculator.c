/*Matthew Danielson
* 6/29/16
* Calculator Program
*/
#include <stdio.h>

int main(){
	printf("Please select an operation: \n");
	printf("For addition enter 1\n");
	printf("For subtraction enter 2\n");
	printf("For multiplication enter 3\n");
	printf("For division enter 4\n");
	printf("For modulus enter 5\n");
	int option;
	scanf("%d", &option);
	printf("Please enter two numbers: \n");
	int x ; int y; double z;
	scanf("%d", &x);
	scanf("%d", &y);
	if(option == 1)
		 z = x+y;
	if(option == 2)
		z = x-y;
	if(option == 3)
		z = x*y;
	if(option == 4)
		z = x/y;
	if(option == 5)
		z = x%y;
	printf("%.2f", z);
}
