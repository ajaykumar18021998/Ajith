#include<stdio.h>
int main()
{
  int c,count=0;
  printf("Enter a number: ");
  scanf("%d",&c);
  while(c)
  {
      c=c/10;
      count++;
  }
  printf("Total digits is:  %d",count);
  return 0;
}
