#include<stdio.h> // 35 function
//int a=10; //global
main()
{
	static int a; //local	
	int _INT = 20;
	printf("enter the value of  a \n"); // %d format specifier
	scanf("%d", &a); // scanf() input, & address location  of variable
	printf("value of a is : %d \n", a); // printf()  output
	printf("value of b is : %d \n" ,_INT);
}
