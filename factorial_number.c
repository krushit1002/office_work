#include<stdio.h>
main()
{
	int i,f=1,num;
	
	printf("the number: \n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	    f=f*i;
	    
	printf("the factorial of %d is:%d \n",num,f);
}
