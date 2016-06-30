#include <stdio.h>

int main(){
	Printf("Please type in a number:");
	int x;
	Scanf("%f",&x);
	Switch(x) {
		case(x>0):
			Printf("\nThis is a positive number");
			break;
		case(x=0):
			Printf("\nThis is 0");
			break;
		case(x<0):
			Printf("\nThis is a negative number");
		}
	return 0;
}


