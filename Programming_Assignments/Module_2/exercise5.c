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
long long price_in_centocents, price_in_centocents_with_tax;//variable to hold user input price in centocents
long long dollars, centocents; //variables to hold dollars and centocent values
double cents;//variables to hold cents value
const double SALES_TAX_RATE = 1.056; //constant to calculate sales tax
const int CENTOCENTS_IN_DOLLAR = 10000; //constant to calculate centocents

int main(void)
{
  //prompt user for input
  printf("Please input item price to calculate sales tax:\n$");
  
  //get user input and assign to item_price variable
  scanf("%lf", &item_price);
  
  //convert user's input price into centocents
  price_in_centocents = item_price * CENTOCENTS_IN_DOLLAR;
  
  //calculate price in centocents with sales tax included
  price_in_centocents_with_tax = price_in_centocents * SALES_TAX_RATE;
  
  //calculate dollars
  dollars = price_in_centocents_with_tax / CENTOCENTS_IN_DOLLAR;
  
  //calculate cents
  centocents = (price_in_centocents_with_tax % CENTOCENTS_IN_DOLLAR);
  cents = (double)centocents / 100;
  
  //print user's input price and total with sales tax
  printf("\nItem price of $%.2lf with sales tax is %lld dollars and %.lf cents",
  item_price, dollars, cents);
  
  return 0;
}