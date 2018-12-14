/************************************************
* filename: question2.c
* Exercise: Module 1, Exercise 2
* Name: Michael McCarron
* Date Created: December 5, 2018
*
* Description: This program demonstrates use of
* several escape sequences within the printf()
* function.
*************************************************/

#include <stdio.h>

int main(void)
{
  printf("This program outputs:\n"); //print a string
  printf("\'Single quotes\'\n"); //print a string with single quotes in it
  printf("\"Double quotes\"\n"); //print a string with double quotes in it
  printf("\\Backslashes\\\n"); //print a string with backslashes in it
  printf("\tand uses a tab\n"); //print a string with a tab in it
  
  return 0;
}
