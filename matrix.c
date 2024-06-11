#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	
	printf("enter 1st matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	printf("display 1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter 2nd matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d \n",&b[i][j]);
		}
	}
	printf("display 2nd matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("addition matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("display addition matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
