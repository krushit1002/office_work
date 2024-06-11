// basic structure: function: piece of block code,when it is called.
// category: no return type and no arguments

#include<stdio.h>
// declaration
void fun(); // optional

void fun()
{
	// defination
	int x,n;
	printf("enter n value: \n");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++) // x=1,2,3,4,5,7,8
	{
		printf("%d * \n",x);
	}
}
void main()
{
	// calling
	
	fun();
	fun();
	
}
