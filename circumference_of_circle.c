//circumference of circle = 2*3.14*r;
#include<stdio.h>
#define PI 3.14 //macros
float r; //global variable
int main()
{
	float circumference;
	printf("enter radius: \n");
	scanf("%f",&r);
	
	circumference = 2*PI*r;
	printf("circumference of circle is:%2lf",circumference);
	
}
