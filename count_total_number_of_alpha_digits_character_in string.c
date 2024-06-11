#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100
int main()
{
	char str[str_size];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	
	printf("count total number of alphabets,digits and special character: \n");
	printf("============================================================: \n");
	printf("the string:");
	fgets(str,sizeof str,stdin);
	while(str[i]!='\0');
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			alp++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			splch++
		}
		i++;
	}
	printf("number of alphabets in the string is:%d \n",alp);
	printf("number of digits in the string is:%d \n",digits);
	printf("number of special character in the string is:%d \n",splch);
}
