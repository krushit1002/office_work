// logical operator : (&&,||,!)
#include<stdio.h>
int main()
{
	int a=10,b=5;
	printf("%d \n",a>b && a>=b);
	printf("%d \n",a>b || a<=b);
	printf("%d \n",!(a<b));
}
