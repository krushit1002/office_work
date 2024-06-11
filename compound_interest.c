#include<stdio.h>
#include<math.h>
int main()
{
	double principle_amount,rate,time_duration,amount,compound_interest;
	
	printf("enter the principle amount: \n");
	scanf("%f",&principle_amount);
	printf("enter the rate of interest: \n");
	scanf("%f",&rate);
	printf("enter the time duration: \n");
	scanf("%f",&time_duration);
	
	amount = principle_amount*((pow((1+rate/100),time_duration)));
	
	compound_interest = amount-principle_amount;
	
	printf("the compound interest is: %f \n",compound_interest);
}
