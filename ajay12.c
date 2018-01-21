#include<stdio.h>
int main()
{
int n,r,reverse=0,d;
scanf("%d",&d);
d=h;
while(h!=0)
{
r=h%10;
reverse=reverse*10+r;
h=h/10;
}
if(reverse==n)
{
printf("its is a palindrome %d",d);
}
else
{
printf("it is not a palindrome %d",d);
}
return 0;
}
