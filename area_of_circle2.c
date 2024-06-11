//area of circle
//global variable

#include<stdio.h>
#define PI 3.14 //macros
float r; //global variable
int main()
{
	float area;
	printf("enter radius: \n");
	scanf("%f",&r);
	area = PI*r*r;
	printf("area of circle is: %3lf",area);
	
}
