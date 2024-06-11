#include<stdio.h>
int main()
{
	char ch;
	
	printf("enter any character: \n");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("%c is uppercasse",ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("%c is lowercasse",ch);
	}
	else
	{
		printf("%c is not alphabets",ch);
	}
}
