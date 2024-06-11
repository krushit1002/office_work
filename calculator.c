#include<stdio.h>
int main()
{
	char opt;
	int n1,n2;
	float res;
	
	printf("choose an operator(+,-,*,/) to perform the operation in c calculater \n");
	scanf("%c",&opt);
	
	if(opt == '/')
	{
		printf("you have select division: \n");
	}
	else if(opt == '*')
	{
		printf("you have select multiplicatin: \n");
	}
	else if(opt == '-')
	{
		printf("you have selected substraction: \n");
	}
	else if(opt == '+')
	{
		printf("you have selected addition: \n");
	}
	
	printf("enter the first number: \n");
	scanf("%d",&n1);
	printf("enter the second number: \n");
	scanf("%d",&n2);
	
	switch(opt)
	{
		case'+':
			res = n1+n2;
			printf("addition of %d and %d is:%f \n",n1,n2,res);
			break;
		case'-':
		    res = n1-n2;
			printf("substraction of %d and %d is:%f \n",n1,n2,res);
			break;
		case'*':
		    res = n1*n2;
			printf("multiplication of %d and %d is:%f \n",n1,n2,res);
			break;
		case'/':
		    res = n1/n2;
		    printf("division of %d and %d is:%f \n",n1,n2,res);
		    break;
		default:
		    printf("something is wrong!! please cheack the option \n");
			    
	}
}
