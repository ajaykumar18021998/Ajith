#include <stdio.h> 

 int main() {
  int b, i, count = 0;
 
  scanf("%d", &n);
  
 printf("enter any number :%d\n",b);
    for (i = 1; i <= b; i++) 
    {
      if (n % i == 0) 
      {
         count++;
      }
  }

  if (count == 2)
  {
  printf("yes");
  }
  else 
  {
  printf("no");
  }
  return 0;    
}
