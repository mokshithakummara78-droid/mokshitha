#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Area of equilateral triangle=%f",(sqrt(3)/4*a*a));
	return 0;
}
