#include<stdio.h>
main()
{
	int a[5],n,i;
	
	printf("enter your array elements:\n");
	scanf("%d",&n);
	printf("array elements are:%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("display elements:\n");
	for(i=n;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
