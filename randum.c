#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main(){
	int r;
	srand(time(0));
	int r = rand();
	Printf("Please type in a integer between 1 and 10:");
	int x;
	Scanf("%d",&x);
	Switch(x) {
		case(x>r):
			Printf("\nIt's too high.");
			break;
		case(x=r):
			Printf("\nIt's correct!");
			break;
		case(x<r):
			Printf("\nIt's too low.");
			break;
		default:
			Printf("\nInvalid answer.");
		}
	return 0;
}
