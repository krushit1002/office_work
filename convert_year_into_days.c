#include<stdio.h>
int main()
{
	int days,month,year;
	
	printf("enter month: \n");
	scanf("%d",&month);
	printf("enter year: \n");
	scanf("%d",&year);
	
	days = month*30;
	
	printf("days: %d \n",days);
	
	days = year*365;
	
	printf("days: %d \n",days);

}
