#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,num=0,a;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=num+a;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
