/*
ARRAY: an array is a collection of same datatypes store in an conigous/consective
       memory location with fixed size is called an ARRAY.
       
syntax:
        datatype  arrayname[]; // [] >>> subscript
		  int       array[3];
types of an array:

1)one dimesional arrray
2)multi dimetional array
*/

#include<stdio.h>
main()
{
	//datatypes arrayname[];
	
	 int arr[5],n,i;
	 printf("enter your elements: \n");
	 scanf("%d",&n);
	 
	 printf("an array elements are : %d",n);
	 
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d \n",&arr[i]);	 	
	 }
	 printf("your array elements are: \n");
	 for(i=0;i<n;i++);
	 {
	 	printf("%d",arr[i]);
	 }
}		         
