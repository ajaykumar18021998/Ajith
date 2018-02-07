#include<stdio.h>
int  main()
{
int x=180,y=160;
x=x^y;
y=x^y;
x=x^y;
printf("\nnumbers after swapping:%d\t%d",x,y);
return 0;
}
