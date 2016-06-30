#include <stdio.h>

float x,y;
char c;
float a;

int main(){
	Scanf("%d%c%d",&x,&c,&y);
	Switch(c);{
		case("+");
			Printf("x+y=%f\n",x+y);
			break;
		case("-");
			Printf("x-y=%f\n",x-y);
			break;
		case("*");
			Printf("x*y=%f\n",x*y);
			break;
		case("/");
			{y != 0? Printf("x/y=%f\n",x/y):Printf("y=0\n");}
			break;
		case("%");
			{y != 0? Printf("x%y=%d\n",x/y):Printf("y=0\n");}
			break;
		}
	return 0;
}
