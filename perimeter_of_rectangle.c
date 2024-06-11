#include<stdio.h>
int main()
{
	float length,width,perimeter;
	
	printf("enter length of rectangle: \n");
	scanf("%f",&length);
	printf("enter width of rectangle: \n");
	scanf("%f",&width);
	
	perimeter = 2*(length+width);
	
	printf("perimeter of rectangle = %f",perimeter);
	
}
