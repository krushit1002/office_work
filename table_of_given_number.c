#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number to the table: \n ");
	scanf("%d",&num);
	
	printf("table of %d",num);
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d = %d",num,i(num*i));
    }  
}
