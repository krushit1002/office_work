// category: no return type and with arguments

#include<stdio.h>

void fun(int x,int y);
void fun(int x,int y)
{
	printf("total sum is: %d",x,y);
}
void main()
{
	int a,b,sum;
	printf("enter a and b values: \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("total of sum is: %d",sum);
}
