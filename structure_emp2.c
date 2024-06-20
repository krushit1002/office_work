#include<stdio.h>
struct emp{
	int id;
	char name[10];
	char add[10];
	int age;
};
int main()
{
	struct emp arr[2];
	int i;
	
	printf("enter employee details: \n");
	for(i=0;i<=1;i++)
	{
		printf("enter emp id: \n");
		scanf("%d",&arr[i].id);
		printf("enter emp name: \n");
		scanf("%s",&arr[i].name);
		printf("enter emp address: \n");
		scanf("%s",&arr[i].add);
		printf("enter emp age: \n");
		scanf("%d",&arr[i].age);
	}
	printf("\n\n----displaying employee details----\n\n");
	for(i=0;i<=1;i++)
	{
		printf("employee id is:%d\n",arr[i].id);
		printf("employee name is:%s\n",arr[i].name);
		printf("employee add is:%s\n",arr[i].add);
		printf("employee age is:%d\n",arr[i].age);
	}
}
