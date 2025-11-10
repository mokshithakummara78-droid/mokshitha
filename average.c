//c program to find average
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6;
	float avg;
	printf("Enter student marks:");
	scanf("%d,%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5,&s6);
	avg=(float)(s1+s2+s3+s4+s5+s6)/6;
	printf("Average=%f",avg);
}
