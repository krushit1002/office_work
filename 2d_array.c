#include<stdio.h>
main()
{
	int arr[2][2],i,j,r,c;
	printf("enter your elements size: \n");
	scanf("%d",&r);
	printf("enter column elements size: \n");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\n",&arr[i][j]);
		}
	}
	printf("displaying 2d array elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);			
		}
		printf("\n");
	}
}
