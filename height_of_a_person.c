#include<stdio.h>
int main()
{
	float perheight;
	
	printf("input the height of the person in centimeters: \n");
	scanf("%f",&perheight);
	
	if(perheight<150.0)
	   printf("the person is dwarf \n");
	else if((perheight>=150.0) && (perheight<165.0))
	   printf("the person is average height \n");
	else if((perheight>=165.0) && (perheight<=195.0))
	   printf("the person is taller \n");
	else
	   printf("normal height \n");         
}
