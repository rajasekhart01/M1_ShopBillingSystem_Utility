#include "bill.h"

    void quantity()
{
    printf("\n\t***Enter 0 for none****");

	printf("\n No. of Teas \n");
	scanf("%d", &teaQTY);

	printf(" No. of SpeacialTea \n");
	scanf("%d", &specialteaQTY);

	printf(" No. of coffees\n");
	scanf("%d", &coffeeQTY);

	printf(" No. of buscuits\n");
	scanf("%d", &buscuitQTY);

	printf(" No. of buns \n");
	scanf("%d", &bunQTY);

	printf(" No. of Milks \n");
	scanf("%d", &milkQTY);
	
    billgeneration();
}
