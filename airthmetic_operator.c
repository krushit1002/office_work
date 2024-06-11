/* what is token: combination of datatype,variable,operator,whitespace and separator 
   is called token

   eg:int a=10;
   
   int - datatype
   a - variable
   = - operator
   10 - value
   ; - separator
   
   without a token we cannot execute any program or code.
   a line of code with meanigful sentence is called token.

*/
// 1)airthmetic operator: (+,-,*,/,%)
#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,div,mod;
	printf("enter value of a and b: \n");
	scanf("%d%d",&a,&b);
	
	sum = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	mod = a%b;
	
	printf("sum: %d \n sub: %d \n mul: %d \n div: %d \n mod: %d \n",&sum,&sub,&mul,&div,&mod);
	
}
