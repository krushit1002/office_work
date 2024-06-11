#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i;
	
	printf("enter number 1: \n");
	scanf("%d",&a);
	printf("enter number 2: \n");
	scanf("%d",&b);
	
	do
	{
		printf("enter 1 for '+'' \n");
		printf("enter 2 for '-' \n");
		printf("enter 3 for '*' \n");
		printf("enter 4 for '/' \n");
		printf("enter 0 for exit \n");
		
		printf("enter your choice: n");
		scanf("%d",&i);
		
		switch(i)
		{
			case 0:
				break;
			case 1:
				printf("a+b = %d \n",a+b);
				break;
			case 2:
				printf("a-b = %d \n",a-b);
				break;
			case 3:
				printf("a*b = %d \n",a*b);
				break;
			case 4:
				printf("a/b = %d \n",a/b);
				break;
			default:
			    printf("enter valid option: \n");	
		}
	}
	while(i !=0);
}
