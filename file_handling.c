#include<stdio.h>
int main()
{
	FILE *fptr;
	char nm[20];
	printf("enter your name:");
	scanf("%s",&nm);
	fptr = fopen("file.txt","a"); // a-append w-write r-read
	fprintf(fptr,"%s",nm);
	fclose(fptr);
}
