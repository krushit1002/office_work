// category: with return type and with arguments

#include<stdio.h>
int fun(int x,int y);
int fun(int x,int y)
{
	return x+y;
}
int main()
{
	int x,y,sum;
	printf("enter x and y values :");
	scanf("%d%d",&x,&y);
	sum=x+y;
	printf("total:%d",sum);
}
