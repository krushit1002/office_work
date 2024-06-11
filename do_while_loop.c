/*
do_while - exit loop(its ask condition at the end)

syntax:

#<header file>
main()
{

datatype variable = value;

do
 {
  //statments;
  //updation
 }
while(variable (condition));
}

*/

#include<stdio.h>
main()
{
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	
	
	do
	{
		printf("%d hello \n",a);
		a++;		
	}
	while(a<=10);
	
}
