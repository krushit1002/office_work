#include<stdio.h>
int main()
{
	int a,b;
	int op;
	
	printf("1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("enter your choice: \n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("sum of %d and %d is:%d",&a,b,a+b);
			break;
		case 2:
		    printf("difference of %d and %d is:%d",a,b,a-b);
			break;
		case 3:
		    printf("multiplication of %d and %d is:%d",a,b,a*b);
			break;
		case 4:
		    printf("division of two number is %d:",a/b);
			break;
		default:
		    printf("enter your correct choice:");
			break;				
	}
}
