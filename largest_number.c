#include<stdio.h>
int main()
{
	int A,B,C;
	
	printf("enter the number A,B and C: \n");
	scanf("%d%d%d",&A,&B,&C);
	
	if(A>=B && A>=C)
	   printf("%d is the largest number",A);
	else if(B>=A && B>=C)
	   printf("%d is the largest number",B);
	else
	   printf("%d is the largest number",C);
	         
}
