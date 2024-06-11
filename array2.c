#include<stdio.h>
main()
{
	int a[3],n,i;
	
	printf("enter your array elements:\n");
	scanf("%d",&n);
	printf("your number is:%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
