#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0;
	
	printf("enter a number: \n");
	scanf("%d",&num);
	
	temp = num;
	while(temp>0)
	{
		rem = temp%10;
		rev = rev*10+rem;
		temp = temp/10;
	}
	printf("reverse number is:%d",rev);
	
	if(num==rev)
	     printf("%d is palindrom number: \n",num);
	else
	     printf("%d is not palindrom number: \n",num);
}
