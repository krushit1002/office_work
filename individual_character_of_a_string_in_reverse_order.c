#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str[100];
   int l=0;
   
   printf("individual character of a string in reverse order: \n");
   printf("================================================== \n");
   printf("the string:");
   fgets(str,sizeof str,stdin);
   l=strlen(str)
   printf("the character of the string in reverse are: \n");
   for(str[l]='\0';l>=0;l--)
   {
   	  printf("%c",str[l]);
   }
   printf("\n");	
}
