// c string.h library function
// compare

#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]={"programming"};
	char str1[10]={"language"};
	
	if(strcmp(str,str1)==0)
	{
		printf("string are equal");
	}
	else
	{
		printf("string are not equal");
	}
}
