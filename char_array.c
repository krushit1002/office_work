#include<stdio.h>
int main()
{
	char ch[5],n,i;
	printf("enter your elements: \n");
	scanf("%d",&n);
	
	printf("an array elements are: %d",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%c \n",&ch[i]);
	}
	printf("your array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%c",ch[i]);
	}
}
