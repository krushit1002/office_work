#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[100],str[100];
	int i;
	
	printf("copy one string into another string into: \n");
	printf("========================================: \n");
	printf("the string:");
	fgets(str1,sizeof str1,stdin);
	i=0;
	while(str1[i]!='\0')
	{
	str2[i]=str1[i];
	i++;
    }
	printf("the first string is:%s \n",str1);
	printf("the second string is:%s \n",str2);
	printf("number of character copied:%d \n"i);  
}
