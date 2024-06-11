#include<stdio.h>
int main()
{
	int a=10,b=20,c,*p,*q,*r;
	
	p=&a;
	q=&b;
	r=&c;
	
	printf("enter a and b value: \n");
	scanf("%d%d",&*p,&*q);
	
	printf("before swapping a: %d and b: %d \n",&*p,&*q);
	
	*r=*p;
	*p=*q;
	*q=*r;
	
	printf("after swapping a: %d and b: %d \n",&*p,&*q);
}
