#include<stdio.h>
int main()
{
	int row,col,arr[row][col];
	int i,j;
	printf("Enter rows and columns:");
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter array elements %d%d:",i,j);
			scanf("%d",arr[i][j]);
		}
	}
	printf("\n-----------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%10d",arr[i][j]);
		}
		printf("\n,\n,\n");
	}
	return 0;
}
