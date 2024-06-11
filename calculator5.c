#include<stdio.h>
main()
{
	int n1,n2,cal,choice;
	char yes;
	yes = 'y';
	while(yes == 'y' || yes == 'Y')
	{
		printf("======calculator====== \n");
		printf("1.addition \n");
		printf("2.substraction \n");
		printf("3.multiplication \n");
		printf("4.division \n");
		printf("5.modulo \n");
		
		printf("enter n1 and n2 value: \n");
		scanf("%d%d",&n1,&n2);
		printf("enter your choice: \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				cal = n1+n2;
				printf("total is:%d",cal);
				break;
			case 2:
				cal = n1-n2;
				printf("total is:%d",cal);
				break;
			case 3:
				cal = n1*n2;
				printf("total is:%d",cal);
				break;
			case 4:
				cal = n1/n2;
				printf("total is:%d",cal);
				break;
			case 5:
			    cal = n1%n2;
				printf("total is:%d",cal);
				break;				
			default:
			    printf("wrong input please enter valid input \n");
					
		}
		printf(" \n do you want to continues?(Y/N): \n");
		yes = getch();
	}
}
