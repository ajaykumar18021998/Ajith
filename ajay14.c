#include <stdio.h>

int main() {
	int s,b,c,i;
	printf("enter a number");
	scanf("%d%d",&s,&b);
	for(i=s;i<b;i++)
	{
		if(i%2==1)
		c=i;
		printf("%d",c);
	}
	}
