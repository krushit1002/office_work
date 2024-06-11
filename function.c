// function - user define
// in-built - printf(),scanf(),getch(),gets(),return()

#include<stdio.h>

// 1.category - no return type and no arguments

void fun(); // declaration(optional)

void fun()
{
	// defination
	
	int a,b,sum;
	printf("enter a and b values: \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("total is: %d \n",sum);
	
}
main()
{
	// calling
	
	fun();
	fun();
	fun();
	
}
