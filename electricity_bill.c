#include<stdio.h>
#include<string.h>
main()
{
	int custid,conu;
	float chg,surchg=0,gramt,netamt;
	char connm[25];
	
	printf("customer id: \n");
	scanf("%d",&custid);
	printf("name of the cutomer name: \n");
	scanf("%s",connm);
	printf("unit consumed by the customer: \n");
	scanf("%d",&conu);
	
	if(conu<200)
	   chg = 1.20;
	else if(conu>=200 && conu<400)
	   chg = 1.50;
	else if(conu>=400 && conu<600)
	   chg = 1.80;
	else
	   chg = 2.00;
	   
	gramt = conu*chg;
	
	if(gramt>300)
	   surchg = gramt*15/100.0;
	   
	netamt = gramt+surchg;
	
	if(netamt<100)
	   netamt=100;
	   
	printf("electricity bill: \n");
	printf("customer id:%d \n",custid);
	printf("customer name:%s \n",connm);
	printf("unit consumed:%d \n",conu);
	printf("amount charge @rs.%4.2f per unit:%8.2f",chg,gramt);
	printf("surcharge amount:%8.2f \n",surchg);
	printf("net amount paid by the customer:%8.2f \n",netamt);          	      
}
