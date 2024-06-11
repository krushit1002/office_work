//swapping without third variable
#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("\n before swap a:%d b:%d",a,b);
	
	a = a+b; //10+20=30
	b = a-b; //30-20=10
	a = a-b; //30-10=20

	printf("\n after swap a:%d b:%d",a,b);	
}

