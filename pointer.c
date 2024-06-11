/* pointer----> a pointer can be used to store the memory address of other
   variable,function
*/

#include<stdio.h>
main()
{
	int a=10,*p;
	p=&a; //pointer store another variable address
	
	printf("the value of a is:%d \n",a);
	printf("the value of a is:%d \n",*p); //storing a address and its value
}
