#include<stdio.h>
int main()
{
	char yes;
	int a,b,c,choice;
	
	yes = 'y';
	while(yes == 'y' || yes == 'Y')
	{
		printf("enter first integer: \n");
		scanf("%d",&a);
		printf("enter second integer: \n");
		scanf("%d",&b);
		
		printf("add(1),subtract(2),multiply(3),divide(4): \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				c = a+b;
				printf("%d + %d = %d",a,b,c);
				break;
			case 2:
				c = a-b;
				printf("%d - %d = %d",a,b,c);
				break;
			case 3:
				c = a*b;
				printf("%d * %d = %d",a,b,c);
				break;
			case 4:
				c = a/b;
				printf("%d / %d = %d",a,b,c);
				break;
			default:
			printf("incorrect choice...try again...\n");
		}
		printf("again(Y/N):");
		//scanf("%c",&yes);
		yes = getch();	
    }
}
