#include<stdio.h>
int main()
{
	char str[100],sstr[100];
	int pos,l,c=0;
	
	printf("extract a substring from a given string: \n");
	printf("=======================================: \n");
	
	printf("the string:");
	fgets(str,sizeof str,stdin);
	
	printf("the position to start extraction:");
	scanf("%d",&pos);
	
	printf("the length of substring:");
	scanf("%d",&l);
	
	while(c<l)
	{
		sstr[c] = str[pos+c-1];
		c++;
	}
	sstr[c] = '\0';
	printf("the substring retrived from the string is:%s \n",sstr);
}
