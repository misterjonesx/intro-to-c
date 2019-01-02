/************************************************
* filename: exercise1.c
* Exercise: Module 3, Exercise 1
* Name: Michael McCarron
* Date Created: January 2, 2019
*
* Description: This program uses nested for loops
* to print successively longer rows of
* ampersands.
*************************************************/

#include <stdio.h>

int rows, columns; //variable to hold rows and columns
const int LIMIT = 6; //constant to limit number of rows to print

int main(void)
{
  //print successive rows of ampersands
  for (rows = 1; rows <= LIMIT; rows++)
    {
      //print ampersands in row until you have the same number as the row #
      for (columns = 1; columns <= rows; columns++)
      printf("&");
      
      //print each row of ampersands on a new line
      printf("\n");
    }
  
  return 0;
  
}