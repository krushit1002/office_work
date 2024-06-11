#include<stdio.h>
int main()
{
	float km,m;
	
	printf("enter distance in kilometer: \n");
	scanf("%f",&km);
	
	m = km*1000;
	
	printf("%f kilometer = %f meter",km,m);
}
