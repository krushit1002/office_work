#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements in the array: \n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter %d elements in the array:",n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers in the array are: \n");
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		printf("%d",arr[i])
	}
	printf("odd numbers in the array are:");
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		printf("%d",arr[i]);
	}
}
