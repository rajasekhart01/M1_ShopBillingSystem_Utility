#ifndef __BILL_H__
#define __BILL_H__
#include "stdio.h"

 #define Tea_PRICE 10.00
 #define SpecialTea_PRICE 20.00
 #define Coffee_PRICE 15.00
 #define Milk_PRICE 15.00


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

void login();
void quantity();
void billgeneration();

#endif
