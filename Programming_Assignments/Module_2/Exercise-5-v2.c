/************************************************
* filename: exercise5.c
* Exercise: Module 2, Exercise 5
* Name: Michael McCarron
* Date Created: December 10, 2018
*
* Description: This program calculates the sales 
* tax for an item.
*************************************************/

#include <stdio.h>

double item_price; //variable to hold user input price
double price_with_tax, cents_with_tax;
const double SALES_TAX_RATE = 1.056; //constant to calculate sales tax

int main(void)
{
  //prompt user for input
  printf("Please input item price to calculate sales tax:\n$");
  
  //get user input and assign to item_price variable
  scanf("%lf", &item_price);
  
  price_with_tax = item_price * SALES_TAX_RATE;
  cents_with_tax = (int)(price_with_tax * 100) % 100;
  printf("%lf", price_with_tax);
  printf("\n%d", cents_with_tax);
  
  /*
  
  price_in_centocents = item_price * 10000;
  centocents_with_tax = price_in_centocents * SALES_TAX_RATE;
  
  dollars = centocents_with_tax / 10000;
  centocents = (centocents_with_tax % 10000);
  cents = (float)centocents / 100;
  
  printf("\n%d", price_in_centocents);
  printf("\n%d", centocents_with_tax);
  printf("\nDollars $%d", dollars);
  printf("\ncentocents %d", centocents);
  printf("\ncents %2.f", cents);
  */
  
  //print user's input price and total with sales tax
  printf("\nItem price of $%.2lf with sales tax is %.f dollars and %-2.f cents",
  item_price, price_with_tax, cents_with_tax);
  
  return 0;
}