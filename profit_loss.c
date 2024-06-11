#include<stdio.h>
int main()
{
	int cprice,sprice,plamt;
	
	printf("cost price: \n");
	scanf("%d",&cprice);
	printf("selling price: \n");
	scanf("%d",&sprice);
	
	if(sprice>cprice)
	{
		plamt = sprice-cprice;
		printf("your profit amount:%d \n",plamt);
	}
	else if(cprice>sprice)
	{
		plamt = cprice-sprice;
		printf("your loss amount:%d \n",plamt);
	}
	else
	{
		printf("no profit and no loss \n");
	}
}
