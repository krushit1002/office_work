#include<stdio.h>
int main()
{
	int num,sum=0;
	
	printf("enter any number to find sum of digits: \n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum += num%10;
		num = num/10;
	}
	printf("sum of digits: %d",sum);
}
