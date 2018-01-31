#include<stdio.h>
int main()
{
    int h1,a1,h2,a2,h3,a3;
    printf("enter time in hours and minutes");
    scanf("%d%d",&h1,&a1);
    printf("enter second time in hours and minutes");
    scanf("%d%d",&h2,&a2);
    h3=h1-h2;
    m3=a1-a2;
    printf("the difference in time is %d\t%d",h3,a3);
    return 0;
}
