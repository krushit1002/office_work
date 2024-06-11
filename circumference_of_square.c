#include<stdio.h>
int main()
{
	float squarelength;
	
	printf("enter length of square:");
	scanf("%f",&squarelength);
	
	float areaofsquare = squarelength*squarelength;
	
	printf("area of square is: %f \n",areaofsquare);
	
	float circumferenceofsquare = 4*squarelength;
	
	printf("circumference of square is:%f",circumferenceofsquare);
	
}
