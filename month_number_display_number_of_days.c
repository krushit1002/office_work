#include<stdio.h>
int main()
{
	int monno;
	char monnm[15];
	
	printf("month no: \n");
	scanf("%d",&monno);
	
	switch(monno)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		     printf("month have 31 days \n");
		     break;
		case 2:
		     printf("the second month is february and have 28 days \n");
			 break;
		case 4:
		case 6:
		case 9:
		case 11:
		     printf("moths have 30 days \n");
			 break;
		default:
		     printf("ivalid month number \n");
			 break;	 	      
			 	
	}
}
