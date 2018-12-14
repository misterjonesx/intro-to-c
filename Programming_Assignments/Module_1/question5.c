/************************************************
* filename: question5.c
* Exercise: Module 1, Exercise 5
* Name: Michael McCarron
* Date Created: December 5, 2018
*
* Description: This program performs several
* mathematical operations on the number 11
* and prints the results.
*************************************************/

#include <stdio.h>

int main(void)
{
  //declare and initialize number variable
  int number = 11;

  //declare variables to hold results of mathematical opterations
  int number_times_2;
  float number_divided_by_2;
  int number_plus_2;
  int number_minus_2;
  int number_squared;

  //perform calculations and assign them to variables
  number_times_2 = number * 2;
  number_divided_by_2 = number / 2.0;
  number_plus_2 = number + 2;
  number_minus_2 = number - 2;
  number_squared = number * number;

  //print description of calculations and results
  printf("%d times 2 is %d\n", number, number_times_2);
  printf("%d divided by 2 is %.1f\n", number, number_divided_by_2);
  printf("%d plus 2 is %d\n", number, number_plus_2);
  printf("%d minus 2 is %d\n", number, number_minus_2);
  printf("%d squared is %d\n", number, number_squared);

  return 0;
}
