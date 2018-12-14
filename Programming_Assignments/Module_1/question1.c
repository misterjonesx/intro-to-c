/************************************************
* filename: question1.c
* Exercise: Module 1, Exercise 1
* Name: Michael McCarron
* Date Created: December 5, 2018
*
* Description: This program prints some
* information about George Clooney.
*************************************************/

#include <stdio.h>


int main(void)
{
  //declare necessary variables
  char First_name[] = "George"; //declares and initializes First_Name character array to "George"
  char Middle_Initial;
  char Last_name[] = "Clooney"; //declares and initializes Last_Name character array to "Clooney"
  int Year_born, Net_worth_USD;
  float Height_in_meters;

  //assign remaining variables
  Middle_Initial = 'T';
  Year_born = 1961;
  Height_in_meters = 1.8;
  Net_worth_USD = 512345678;

  //print variables in target phrase
  printf("%s %c %s, born %d, is %.1f meters tall and is worth $%d\n",
  First_name, Middle_Initial, Last_name, Year_born, Height_in_meters,
  Net_worth_USD);

  return 0;
}
