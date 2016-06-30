/*Ava N.*/
#include <stdio.h>

int main()

{
   float y; /*first number*/
   float z; /*second number*/
   float a; /*answer*/
   char x; /*operation*/
   
   printf("Choose one of the following: +, -, *, /, or % \n");
   scanf("%c", &x);
   printf("Pick a number \n");
   scanf("%f", &y);
   printf("Pick another number \n");
   scanf("%f", &z);
   switch(x)
{
	    case '+':
	            a=y+z;
		    printf("The addition is: \n", x);
	            break;
	    case '-':
		    a=y-z;   
		    printf("The subtraction is: \n", x);
	            break;	
	    case '/':
		    a=y/z;
		    printf("The division is: \n", x);
		    break;
	    case '*':
       	    	    a=y*z;
	            printf("The multiplication is: \n", x);
		    break;
	    case '%':
		    a=(int)y%(int)z;
		    printf("The percentage is: \n", x);
		    break;
	    default:
		    printf("Your response was invalid. Please try again.");
}

   printf("%f \n", a);

   return 0;

}
