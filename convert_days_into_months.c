#include<stdio.h>
int main()
{
	int months,days;
	
	printf("enter days: \n");
	scanf("%d",&days);
	
	months = days/30;
	
	printf("months = %d",months);
}
