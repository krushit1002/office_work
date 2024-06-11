#include<stdio.h>
int main()
{
	int i=0,number[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter your number: \n",i);
		scanf("%d",&number[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("number:%d \n",i,number[i]);
	}
}
