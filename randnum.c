#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int r=rand();
	r=r%10+1;
	int g;
	int x=1;
	while(x)
	{
		printf("Enter your guess\n");
		scanf("%d",&g);
		if(r<g)
		{
			printf("you guessed too high\n");
		}
		else
		{
			if(r>g)
				printf("you guess too low\n");
			else
			{
				x=0;
				printf("you guessed correctly\n");
			}
		}
	}
}
