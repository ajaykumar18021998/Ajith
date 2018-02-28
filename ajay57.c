#include<stdio.h>
void main()
{
	int a,b,t;
	printf("eneter the number");
	scanf("%d%d",&a,&b);
	printf("number of before swap %d%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("after swap%d%d",a,b);
}
