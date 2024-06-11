// category: with return type and no arguments

#include<stdio.h>
int fun(); // declaration(optional)
int fun()
{
	// defination
	int age;
	printf("enter your age: \n");
	scanf("%d",&age);
	
	if(age<=60)
	{
		printf("they can work: \n");
	}
	else
	{
		printf("they cannot work: \n");
	}
}
