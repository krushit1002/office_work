#include<stdio.h>
int main()
{
	int a,b,c,add,sub,mul,div;
	printf("enter value of a,b and c: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	printf("add is:%d \n",add);
	printf("sub is:%d \n",sub);
	printf("mul is:%d \n",mul);
	printf("div is:%d \n",div);
}
