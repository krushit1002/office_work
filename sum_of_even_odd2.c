#include<stdio.h>
int main()
{
	int i=1;
	int sumeven=0;
	int sumodd=0;
	
	do
	{
		if(i%2 == 0)
		{
			sumeven+=i;
		}
		else
		{
			sumodd+=i;
		}
		i++;
	}
	while(i<=50);
	
	printf("sum of even number:%d \n",sumeven);
	printf("sum of odd number:%d \n",sumodd);
}
