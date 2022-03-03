#include "stdio.h"
#include "conio.h"
#include "inc/bill.h"

#define Tea_PRICE 10.00
#define SpecialTea_PRICE 20.00
#define Coffee_PRICE 15.00
#define Milk_PRICE 15.00

int main(void)
 {
	

//Local Declarations

	const double Buscuit_PRICE = 10.00;
	const double Bun_PRICE = 5.00;
	const double taxRate = 10.00; 

	int teaQTY;
	int specialteaQTY;
	int coffeeQTY;
	int buscuitQTY;
	int bunQTY;
    int milkQTY;
    
	float total_tea;
	float total_specialtea;
	float total_coffee;
	float total_buscuit;
	float total_bun;
	float total_milk;
	float subTotal;
	float tax;
	float bill_Amount;
	char name[250];
	char cname[24];
    char date[29];
//	Statements

	printf("\t\tWelcome To Raja cafe \n");
	printf("\n Please Enter the following details. \n\n");
	
	void login();
   {
	printf("Admin: \n");
	scanf("%s",name);
	printf("Customer's Name: \n");
	scanf("%s",cname);
	printf("Date (dd/mm/yyyy)\n");
	scanf("%s",date);
    }
  
	void Quantity();
	{
	printf("\n\t***Enter 0 for none****");

	printf("\n no. of Teas \n");
	scanf("%d", &teaQTY);

	printf(" no. of SpeacialTea \n");
	scanf("%d", &specialteaQTY);

	printf(" no. of Coffees\n");
	scanf("%d", &coffeeQTY);

	printf(" no. of Buscuits\n");
	scanf("%d", &buscuitQTY);

	printf(" no. of Buns \n");
	scanf("%d", &bunQTY);
	
	printf(" no. of Milks \n");
	scanf("%d", &milkQTY);
}

	printf("\n Press Enter To Get the Bill");
	getch();


printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
int a;
   	for( a=1;a<8;a++) // Change 'a<?' to how many * we want
	{
		printf("...");
	}
      printf("\n\n\t\t\t\t\tBill Created \n\n");
      
//	Calculation Statements
void billgeneration();

	total_tea = teaQTY * Tea_PRICE;
	total_specialtea = specialteaQTY * SpecialTea_PRICE;
	total_coffee = coffeeQTY * Coffee_PRICE;
	total_buscuit= buscuitQTY * Buscuit_PRICE;
	total_bun = bunQTY * Bun_PRICE;
	total_milk = milkQTY * Milk_PRICE;
	subTotal = total_tea + total_specialtea + total_coffee + total_buscuit + total_bun;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;


//	Printing Bills
    //void login();
    //void quantity();
	//void billgeneration();
  
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      Raja Tea Stall Bill\n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t Teas                 %.2f       %10.2f \n", teaQTY, Tea_PRICE, total_tea);
	printf("\t\t\t%02d  \t SpeacialTeas         %.2f       %10.2f  \n", specialteaQTY, SpecialTea_PRICE, total_specialtea);
	printf("\t\t\t%02d   \t Coffees CTRLR        %.2f       %10.2f   \n", coffeeQTY, Coffee_PRICE, total_coffee);
	printf("\t\t\t%02d    \t Buscuits             %.2f       %10.2f    \n", buscuitQTY, Buscuit_PRICE, total_buscuit);
	printf("\t\t\t%02d     \t Buns                 %.2f       %10.2f     \n\n", bunQTY, Bun_PRICE, total_bun);
	printf("\t\t\t%02d     \t Milks                 %.2f       %10.2f    \n\n", milkQTY, Milk_PRICE, total_milk);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
	printf("\t\t\t                           TAX            %10.2f    \n", tax);
	printf("\t\t\t                           Total$         %10.2f     \n", bill_Amount);
	printf("\t\t\t                           Customer       %s     \n", cname);
	printf("\t\t\t                           Admin         %s     \n", name);
	printf("\t\t\t                           date          %s     \n", date);
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");
  
     return 0;
	
	
} 
