#include<stdio.h>
int calculateseriessum(int n)
{
	int sum=0;
	int sign=1;
	
	for(int i=1;i<=n;i++)
	{
		sum+=sign*i;
		sign*=-1;
	}
	return sum;
}
int main()
{
	int n;
	printf("enter the value of n: \n");
	scanf("%d",&n);
	
	int result=calculateseriessum(n);
	printf("sum of the series:%d \n",result);
	
}
