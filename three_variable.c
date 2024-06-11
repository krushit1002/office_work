#include<stdio.h>
main()
{
  int a,b,c,sum,sub,mul,div;
  printf("enter value for a,b and c : \n");
  scanf("%d%d%d",&a,&b,&c);
  
  sum=a+b+c;
  sub=a-b-c;
  mul=a*b*c;
  div=a/b/c;
  printf("sum is : %d\n",sum);
  printf("sub is : %d\n",sub);
  printf("mul is : %d\n",mul);
  printf("div is : %d\n",div);
}
