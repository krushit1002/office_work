#include<stdio.h>
int main()
{
	char f_name[10],m_name[10],l_name[10];
	
	printf("Enter Full Name:(first middle last): \n");
	scanf("%s%s%s",f_name,m_name,l_name);
	
	printf("Abbreviated Name: \n");
	printf("%c.%c. %s \n",f_name[0],m_name[0],l_name);
}
