#include<stdio.h>
int main()
{
	float radius,area;
	printf("enter radius:");
	scanf("%f",&radius);
	
	area = 3.14*radius*radius;
	printf("area of circle is: %.2lf",area);
}
