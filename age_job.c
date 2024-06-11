// nested program for final 

#include<stdio.h>
main()
{
	int age,job;
	printf("enter your age and job");
	scanf("%d%d",&age,&job);
	
	if(age<18 && job>=61)
	{
	 //	printf("this  person cannot vote as well as not do job");
		
		if(age<=18 && job<=60)
		{
			printf("this person can vote but not do job");
		}
		else
		{
		  printf("this  person cannot vote as well as not do job");	
		}
		
		
	}
	
	else
	{
		printf("this person can vote and do job");
	}
}
