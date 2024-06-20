#include<stdio.h>
struct emp{
	int id;
	char name[5];
	char add[15];
	int age;
}e1;
int main()
{
	printf("enter your id: \n");
	scanf("%d",&e1.id);
	printf("enter your name: \n");
	scanf("%s",&e1.name);
	printf("enter your address: \n");
	scanf("%s",&e1.add);
	printf("enter your age: \n");
	scanf("%d",&e1.age);
	
	printf("my id is: %d\n",e1.id);
	printf("my name is:%s\n",e1.name);
	printf("my address is:%s\n",e1.add);
	printf("my age is:%d",e1.age);
	
}
