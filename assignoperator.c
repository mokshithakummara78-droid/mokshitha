#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x value:");
	scanf("%d",&x);
	printf("y value is=%d\n",y=x);
	printf("addition A.O=%d\n",y += x);
	printf("subtraction A.O=%d\n",y -= x);
	printf("mulitiplication A.O=%d\n",y *= x);
	printf("division A.O=%d\n",y /= x);
	printf("modulus A.O=%d",y %= x);
	return 0;
}
