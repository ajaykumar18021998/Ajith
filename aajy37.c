#include<stdio.h>
int main()
{
int c,b,t;
printf("Enter two numbers:");
scanf("%d %d",&c,&b);
t=c;
c=b;
b=t;
printf("After swapping: %d %d",c,b);
return 0;
}
