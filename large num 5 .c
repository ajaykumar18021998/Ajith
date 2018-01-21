#include <stdio.h>

int main(void) {
	int a,b,g;
	scanf("%d%d%d",&a,&b,&g);
	printf("%d%d%d",a,b,g);
	if(a>b&&a>g)
	{
		printf("a is large");
	}
	else if(b>a&&b>g)
	{
		printf("b is large");
	}
	else
	{
		printf("g is large");
	}
      
	return 0;
}
