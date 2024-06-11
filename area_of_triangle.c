//area of triangle
#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter height:");
	scanf("%d",&height);
	
	area = 0.5*base*height;
	printf("area of triangle: %f",area);
	
}
