#include<stdio.h>
int main()
{
	// int n1,n2,cal;
	// char c,addanother;
	// do{
	
	int n1,n2,cal;
	char c; //addanother;
	
	printf("=====calculator=====\n");
	printf("1.addition \n");
	printf("2.substaction \n");
	printf("3.multiplication \n");
	printf("4.division \n");
	
	printf("enter n1 and n2 value: \n");
	scanf("%d%d",&n1,&n2);
	
	printf("enter choice \n");
	scanf("%c",&c);
	
	switch(c)
	{
		case '+':
			cal = n1+n2;
			printf("total is: %d",cal);
			break;
		case '-':
			cal = n1-n2;
			printf("total is: %d",cal);
			break;
		case '*':
			cal = n1*n2;
			printf("total is: %d",cal);
			break;
		case '/':
			cal = n1/n2;
			printf("total is: %d",cal);
			break;			
		default:
		    printf("wrong input please enter valid input \n");
				
	}  //printf("do you want to continue:y/n);
	   //scanf("%c",&addanother);
	   //addanother = getch();
	   //}
	   //while(addanother == 'y' || addanother=='Y');
}
