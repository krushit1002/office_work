// goto statments
#include<stdio.h>
main()
{
	int num1,i;
	printf("enter your number: \n");
	scanf("%d",&num1);
	table:
		while(i<=10)
		{
			printf("%d * %d = %d \n",num1,i,num1*i);
			i++;
			
			goto table;
		}
}
