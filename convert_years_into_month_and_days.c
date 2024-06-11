#include<stdio.h>
int main()
{
	int years,months,days;
	
	printf("enter the number of years: \n");
	scanf("%d",&years);
	
	months = 12*years;
	days = 365*years;
	
	printf("total months:%d \n",months);
	printf("total days:%d \n",days);
}
