#include<stdio.h>
int main()
{
	char ch;
	
	printf("enter the character: \n");
	scanf("%c",&ch);
	
	if(ch == 'a'  || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
	{
	printf("the character %c is a vowel \n",ch);
    }
    else
    {
    	printf("the character %c is a constanat \n",ch);
	}
}
