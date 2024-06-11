#include<stdio.h>
int main()
{
	int anga,angb,angc,sum;
	
	printf("input three angels of triangle: \n");
	sacnf("%d%d%d",&anga,&angb,&angc);
	
	sum = anga+angb+angc;
	
	if(sum == 180)
	{
		printf("the triangle is valid: \n");
	}
	else
	{
		printf("the triangle is not valid: \n");
	}
}
