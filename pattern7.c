#include<stdio.h>
int main()
{
	int i,j,k,n;
	
	printf("enter n: \n");
	scanf("%d",&n);
	
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			printf("%3d",k);
		}
		printf("\n");
	}
}
