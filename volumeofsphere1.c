#include<stdio.h>
int main()
{
	int r;
	float PI=3.14;
	printf("Enter radius:");
	scanf("%d",&r);
	printf("volume of sphere=%f",((float)4/3*PI*r*r*r));
	return 0;
}
