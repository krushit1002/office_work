#include<stdio.h>
int main()
{
	float loan;
	float interest;
	int n;
	float outstanding;
	float outstanding2;
	float princeable;
	float payment;
	
	printf("enter the amount of the loan: \n");
	scanf("%f",&loan);
	printf("enter the monthly interest persentage: \n");
	scanf("%f",&interest);
	printf("enter the monthly payment: \n");
	scanf("%f",&payment);
	printf("enter the number of monthly payment: \n");
	scanf("%i",&n);
	
	while(n>=0)
	{
		outstanding = (loan-payment);
		outstanding = (outstanding*(1+(interest/100)));
		
		printf("outstanding balance after %i = %.2f \n\n",n,outstanding);
		
		n--;
	}
}
