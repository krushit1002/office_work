#include<stdio.h>
struct stu{
	int id;
	char name[10];
};
int main()
{
	struct stu arr[5];
	int i;
	printf("enter students details: \n");
	for(i=1;i<=5;i++)
	{
		printf("enter student id: \n");
		scanf("%d",&arr[i].id);
		printf("enter student name: \n");
		scanf("%s",&arr[i].name);
	}
	printf("\n\n----displaying student details----\n");
	for(i=1;i<=5;i++)
	{
		printf("student id is:%d\n",arr[i].id);
		printf("student name is:%s\n",arr[i].name);
	}
}
