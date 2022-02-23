#include "bill.h"

    void quantity()
{
    printf("\n\t***Enter 0 for none****");

	printf("\n no. of Teas \n");
	scanf("%d", &teaQTY);

	printf(" no. of SpeacialTea \n");
	scanf("%d", &specialteaQTY);

	printf(" no. of coffees\n");
	scanf("%d", &coffeeQTY);

	printf(" no. of buscuits\n");
	scanf("%d", &buscuitQTY);

	printf(" no. of buns \n");
	scanf("%d", &bunQTY);

	printf(" no. of Milks \n");
	scanf("%d", &milkQTY);
	
    billgeneration();
}
