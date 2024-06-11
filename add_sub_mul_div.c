#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a: \n");
	scanf("%d",&a);
	printf("enter value of b: \n");
	scanf("%d",&b);
	
	int add = a+b;
	int sub = a-b;
	int mul = a*b;
	int div = a/b;
	
	printf("add is: %d \n",add);
	printf("sub is: %d \n",sub);
	printf("mul is: %d \n",mul);
	printf("div is: %d \n",div);
}
