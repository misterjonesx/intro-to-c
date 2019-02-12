/************************************************
* filename: calc_driver.c
* Exercise: Module 6, Exercise 5
* Name: Michael McCarron
* Date Created: January 29, 2019
*
* Description: This program is a *simple* 
* calculator. It asks the user what operation 
* they would like to perform, and then asks them
* to input two numbers, and prints the results.
* It stores the function declarations and 
* definitions for add() and subtract() in separate
* files.
*************************************************/

/* compile with addition.c and subtraction.c */
#include <stdio.h>
#include "addition.h"
#include "subtraction.h"

int main(void)
{
  int num1, num2; //store operands
  char ch; //read in operation type
  
  
  //determine operation type
  puts("I am simple, two-steppin' calculator.");
  puts("First things first, are we adding today, or subtracting?");
  puts("Enter + for addition, enter - for subtraction:");
  while (scanf("%c", &ch))
  {
    if (ch == '+' || ch == '-') //if '+' or '-', break out of loop
      break;
    else //else, retry input
    {
      while (getchar() != '\n') //clear input line
        continue;
      puts("\nIncorrect entry, please try again.");
      puts("Enter + for addition, enter - for subtraction:");
    }
  }
  
  //get operands
  puts("Now, enter two integer values:");
  scanf(" %d %d", &num1, &num2);
  if (ch == '+') //if selected operation was addition
    printf("\n%d + %d = %d\n", num1, num2, add(num1, num2)); //print results
  if (ch == '-') //if selected operation was subtraction
    printf("\n%d - %d = %d\n", num1, num2, subtract(&num1, &num2)); //print results

  return 0;
}