#include<stdio.h>
int main()
{
	int a,b=5,c=7;
	a=(++b,--c);
	printf("a,b,c values are=%d,%d,%d",a,b,c);
	return 0;
}
