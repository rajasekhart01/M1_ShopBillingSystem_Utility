#include "bill.h"

 void login()
{ 
	char name[15], cname[15], date[15];
    printf("administrator: \n");
	scanf("%s",name);

	printf("Customer's Name: \n");
	scanf("%s",cname);

	printf("Date (dd/mm/yyyy)\n");
	scanf("%s",date);
	
    quantity();
}
