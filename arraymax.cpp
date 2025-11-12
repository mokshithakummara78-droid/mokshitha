#include<stdio.h>
int main()
{
	int i,arr[10];
	int large;
	printf("enter a array elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=0;i<10;i++)
	{
		if(large>arr[i])
		large=arr[i];
	}
	printf("%d",arr[i]);
}
