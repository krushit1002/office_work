#include<stdio.h>
int main()
{
	int age,drive;
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your drive:");
	scanf("%d",&drive);
	
	if(age<=17)
	{
		printf("not elligible vote");
		printf("not elligible for drive");
	}
	else
	{
		printf("elligible for vote");
		printf("elligible for drive");
	}
}
