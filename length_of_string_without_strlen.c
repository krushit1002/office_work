#include<stdio.h>
int main()
{
	char str[100];
	int i,length=0;
	
	printf("enter a string: \n");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("length of string:%d",length);
}
