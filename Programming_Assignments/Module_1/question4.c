/************************************************
* filename: question4.c
* Exercise: Module 1, Exercise 4
* Name: Michael McCarron
* Date Created: December 5, 2018
*
* Description: This program converts an age in
* years to days and prints both.
*************************************************/

#include <stdio.h>

int main(void)
{
  //declare and initialize age in years
  int age_years = 31;

  //declare age in days
  int age_days;

  //calculate and assign age in days
  age_days = age_years * 365;

  //print target phrase with age in years and age in days
  printf("\nI am %d years old which is also %d days old!\n\n", age_years,
  age_days);
  return 0;
}
