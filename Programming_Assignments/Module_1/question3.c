/************************************************
* filename: question3.c
* Exercise: Module 1, Exercise 3
* Name: Michael McCarron
* Date Created: December 5, 2018
*
* Description: This program calculates and prints
* the average of two numbers.
*************************************************/

#include <stdio.h>

int main(void)
{
  //declare and initialize temperature1 and temperature2 veriables
  int temperature1 = 72;
  int temperature2 = 85;

  //declare average temperature variable
  float average;

  /*calculate and assign average temperature, dividend is 2.0 so that the
  result of the operation will be a float*/
  average = (temperature1 + temperature2) / 2.0;

  /*print temperature1, temperature2, and average temperature in the
  target phrase*/
  printf("The average of %d and %d degrees is %.1f degrees\n", temperature1,
  temperature2, average);

  return 0;
}
