#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],i,j,l,m,k;
	
	printf("concatenate two strings manually: \n");
	printf("================================: \n");
	
	printf("the first string:");
	fgets(str2,sizeof str2,stdin);
	
	l=strlen(str1);
	m=strlen(str2);
	
	for(i=0;j<m-1;j++,i++)
	{
		str1[i]=str2[j];
	}
	k=strlen(str1);
	printf("after concatenation the string is: \n");
	for(i=0;i<k;i++)
	{
	  printf("%c",str1[i]);
	}
	printf("\n");
}
