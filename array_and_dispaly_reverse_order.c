#include<stdio.h>
int main()
{
	int i,n,a[100];
	
	printf("read a number of value in an array and display it in reverse order: \n");
	printf("======================================================================");
	
	printf("input the number of elements to store in the array: \n");
	scanf("%d",&n);
	printf("input %d number of elements in the array are: \n");
    {
    	printf("elements - %d:",i);
    	scanf("%d",&a[i]);
	}
	printf("the value store in array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("the value store in the array in reverse are: \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
}
