//structure with function (with return type and with arguments)

#include<stdio.h>
struct school{
	int roll;
}s1;
int fun(struct school s1);
int fun(struct school s1)
{
	fun(s1); // calling
}
int main()
{
	printf("enter roll_no");
	scanf("%d",&s1.roll);
}
