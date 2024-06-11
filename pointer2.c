#include<stdio.h>
int main()
{
	int a,b,*p,*q,r;
	p=&a;
	q=&b;
	
	printf("enter a and b value: \n");
	scanf("%d%d",&*p,&*q);
	
	r=*p+*q;
	
	printf("the total value of both variable is:%d",r);
}
