://Clarke Littlejohn
//A simple five function calculator

#include <stdio.h>
 
 int main(){ 
	
	 int value1;
	 int value2;
	 int value3;
	 float value4;
	 char oper;
	
         printf("\nEnter one of the  five characters below to peform that operation.");
         printf("\n+: value1 plus value2    -: value1 minus value2    *: value1 times value2\n");
         printf("/: value1 divided value2    %%: the remainder of value1 divided by value2\n");
	 scanf("%c",&oper);
         printf("Enter a number for the first value:");
	 scanf("%d",&value1);
         printf("\nEnter a number for the second:");
         scanf("%d",&value2);
	 	
	 
	 switch(oper){
		 case '%':
			 value3=value1%value2;
		 printf("%d%%%d=%d\n",value1,value2,value3);
		 break;

		 case '+':
			 value3=value1+value2;
		 printf("%d+%d=%d\n",value1,value2,value3);
		 break;
		
		 case '-':
			 value3=value1-value2;
		 printf("%d-%d=%d\n",value1,value2,value3);
		 break;
		
		 case '*':
			 value3=value1*value2;
		 printf("%d*%d=%d\n",value1,value2,value3);
		 break;
		
		 case '/':
			 value4=(float) value1/(float) value2;
		 printf("%d/%d=%.2f\n",value1,value2,value4);
		 break;

		 default:
		 printf("You did not enter one of the five symbols, please restart the program.\n");
		}

 }
