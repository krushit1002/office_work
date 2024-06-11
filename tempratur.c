#include<stdio.h>
int main()
{
	int temp;
	
	printf("days tempratue: \n");
	scanf("%d",&temp);
	
	if(temp<0)
	   printf("freezing whether \n");
	else if(temp<10)
	   printf("very cold whether \n");
	else if(temp<20)
	   printf("cold whether \n");
	else if(temp<30)
	   printf("normal whether \n");
	else if(temp<40)
	   printf("its hot whether \n");
	else
	   printf("its very hot whether \n");               
}
