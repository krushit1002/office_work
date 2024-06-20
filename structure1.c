/*
  structure:
  the structure in c is a user-defined data type that can be used
  to group items of possibility different types into a single type.
*/

#include<stdio.h>
struct school{
	int id;
	char name[5];
	double salary;
	float c_no;
}x;

int main()
{
	printf("enter your id: \n");
	scanf("%d",&x.id);
	printf("enter your name: \n");
	scanf("%s",&x.name);
	printf("enter your salary: \n");
	scanf("%d",&x.salary);
	printf("enter your c_no: \n");
	scanf("%f",&x.c_no);
	
	printf("my id is: %d\n",x.id);
	printf("my name is:%s\n",x.name);
	printf("my salary is:%d\n",x.salary);
	printf("my c_no is:%f\n",x.c_no);	
}
