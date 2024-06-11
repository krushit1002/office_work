// Relation operator: (<,>,<=,>=,!=,==)
// a=10 ,b=20 (a<b) (a>b)    (a<3)

#include<stdio.h>
int main()
{
	int a=1,b=5;
	printf("%d\n",a<b);
	printf("%d\n",a>b);
	printf("%d\n",a<=b);
	printf("%d\n",a>=b);
	printf("%d\n",!(a=b));
	printf("%d\n",a==b);
}
