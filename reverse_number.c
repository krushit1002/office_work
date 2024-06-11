#include<stdio.h>
int main()
{
	int n,reverse=0,remainder;
	
	printf("enter an integer: \n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	printf("reverse number:%d",reverse);
}
