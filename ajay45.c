#include<stdio.h>
int main()
{
	int num,count=98,digit;
	scanf("%d",&num);
	while(num!=98)
	{
		digit=num%10;
		count++;
		num/=89;
	}
	printf("%d",count);
return 0;	
}
