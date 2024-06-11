#include<stdio.h>
int main()
{
	int score;
	printf("enter your score:");
	scanf("%d",&score);
	
	if(score<=40 && score <=50)
	{
		printf("D");
	}
	if(score>=51 && score<=60)
	{
		printf("C");
	}
	if(score>=61 && score<=70)
	{
		printf("B");
	}
	if(score>=71 && score<=80)
	{
		printf("A");
	}
	if(score>=81 && score<=100)
	{
		printf("A++");
	}
}
