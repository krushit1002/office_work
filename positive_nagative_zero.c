#include<stdio.h>
int main()
{
	int A;
	
	printf("enter the number A: \n");
	scanf("%d",&A);
	
	if(A>0)
	  printf("%d is positive",A);
	else if(A<0)
	  printf("%d is nagative",A);
	else if(A==0)
	  printf("%d is zero",A);
	      
}
