#include <stdio.h>

int main(void) 
{
	int c;
	scanf("%d",&c);
	if(c%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
