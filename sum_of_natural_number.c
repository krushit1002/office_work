#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("enter a positive integer: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
}
