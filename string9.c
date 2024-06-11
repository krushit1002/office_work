// c string.h library function
// copy

#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]={"programming"};
	char str1[10]={"language"};
	char str2[20];
	
	printf("%s",strcpy(str2,str));
	printf("%s",strcpy(str2,str1));
}
