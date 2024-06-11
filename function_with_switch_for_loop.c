#include<stdio.h>
void fun();

void fun1()
{
	int week;
	printf("enter your week day: \n");
	scanf("%d",&week);

   switch(week)
   {
   	case 1: 
	        printf("MONDAY \n");
   	        break;
   	case 2: 
	        printf("tuesday \n");
	        break;
	case 3:
	        printf("wednesday \n");
			break;
	case 4:
	        printf("thursday \n");
			break;
	case 5:
	        printf("friday \n");
			break;
	case 6:
	        printf("saturday \n");
			break;
	default:
	       printf("invalid");
		   break;										        
   }
}

void fun2()
{
	int a=1;
	
	for(a=1;a<=5;a++)

	printf("hello world: \n");
}
main()
{
	fun1();
	fun2();
	fun1();
	fun2();
}
