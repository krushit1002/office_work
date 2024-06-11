// goto statments
#include<stdio.h>
main()
{
	int num1,i;
	printf("enter your number: \n");
	scanf("%d",&num1);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",num1,i,num1*i);
		if(i=9) break;
	}
}
