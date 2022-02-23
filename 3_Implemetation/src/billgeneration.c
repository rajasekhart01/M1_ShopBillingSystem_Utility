#include"bill.h"

void billgeneration()

{
    total_tea = teaQTY * Tea_PRICE;
	total_specialtea = specialteaQTY * SpecialTea_PRICE;
	total_coffee = coffeeQTY * Coffee_PRICE;
	total_buscuit= buscuitQTY * Buscuit_PRICE;
	total_bun = bunQTY * Bun_PRICE;
	total_milk = milkQTY * Milk_PRICE;
	subTotal = total_tea + total_specialtea + total_coffee + total_buscuit + total_bun+ total_milk;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;
}
