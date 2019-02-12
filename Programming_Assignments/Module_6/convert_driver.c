/************************************************
* filename: convert_driver.c
* Exercise: Module 6, Exercise 4
* Name: Michael McCarron
* Date Created: January 29, 2019
*
* Description: This program asks the user to input
* a temperature in Farenheit and converts it to 
* Celcius. The declaration and definitions for 
* the function convert() are stored in separate 
* files. Compile with conversion.c.
*************************************************/

//compile with conversion.c
#include <stdio.h>
#include "conversion.h"

int main(void)
{
  double temperature_in_farenheit; //store user input temperature
  
  printf("Please enter a temperature in Farenheit: \n"); //prompt for input
  scanf("%lf", &temperature_in_farenheit); //get user input
  
  //convert and print results
  printf("%.2lf Farenheit is %.2lf Celcius\n", temperature_in_farenheit, 
  convert(temperature_in_farenheit));
  
  return 0;
}

