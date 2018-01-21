#include<stdio.h> 

int main()
{
           int c,f2,rem,i;
           printf("   Give the First number for the Range :   \n");
           scanf("%d",&c);
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&f2);
           printf("\n The Even numbers between %d and %d are ",c,f2); 
           for(i=c; i<=f2; ++i){
              rem = i % 2;
               if(rem == 0)
               printf("\n  %d",i);
           }
    return 0; 
