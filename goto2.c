// goto statments

#include<stdio.h>
main()
{
	int num,i=1;
	
	printf("enter your number: \n"); //5
	scanf("%d",&num); //5
	
	table:
	printf("%d * %d = %d \n",num,i,num*i);
	i++;
	if(i<=5)
	
	goto table;
}
