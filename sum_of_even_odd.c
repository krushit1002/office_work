#include<stdio.h>
int main()
{
	int i,num,odd_sum = 0,even_sum = 0;
	
	printf("enter the value of num: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2 == 0)
		   even_sum = even_sum+i;
		else
		   odd_sum = odd_sum+i;   
	}
	printf("sum of all odd number: %d \n",odd_sum);
	printf("sum of all even number: %d \n",even_sum);
}
