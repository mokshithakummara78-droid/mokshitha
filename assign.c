#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two values:");
	scanf("%d,%d",&a,&b);
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d>=%d is %d\n",a,b,a>=b);
	printf("%d<=%d is %d\n",a,b,a<=b);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d>%d is %d\n",a,b,a>b);
	printf("%d!=%d is %d\n",a,b,a!=b);
	return 0;
}
