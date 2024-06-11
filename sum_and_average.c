#include<stdio.h>
int sum(int a,int b,int c,int d,int e);
float average(int sum);
int main()
{
	int a,b,c,d,e;
	int sum;
	float average;
	
	printf("enter five number: \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	sum=sum(a,b,c,d,e);
	average=average(sum)
	
	printf("sum:%d \n",sum);
	printf("average:%d.2f",average);
	
}
int sum(int a,int b,int c,int d,int e)
{
	int sum;
	sum=a+b+c+d+e;
	
}
float average(int sum)
{
	float average;
	average=(float)sum/5;
	
}
