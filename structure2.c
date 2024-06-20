//structure with array

#include<stdio.h>
struct emp{
	int id;
	char name[10];
	double salary;
};

int main()
{
	struct emp arr[2];
	int i;
	
	printf("enter employee details: \n");
	for(i=1;i<=2;i++)
	{
		printf("enter emp id: \n");
		scanf("%d",&arr[i].id);
		printf("enter emp name: \n");
		scanf("%s",&arr[i].name);
		printf("enter emp salary: \n");
		scanf("%d",arr[i].salary);		
	}
	printf("\n\n----displaying employee details----\n\n");
	for(i=0;i<=2;i++)
	{
		printf("employee id is:%d\n",arr[i].id);
		printf("employee name is:%s\n",arr[i].name);
		printf("employee salary is:%d\n",arr[i].salary);
	}
}
