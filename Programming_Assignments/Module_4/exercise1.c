/************************************************
* filename: exercise1.c
* Exercise: Module 4, Exercise 1
* Name: Michael McCarron
* Date Created: January 6, 2019
*
* Description: This program has a user input some
* text, and equal sign, and an integer, and then 
* reads and prints the integer.
*************************************************/

//get input from user
//while not = sign,
  //discard input,
  //after = sign,
  //read integer
//print integer

#include <stdio.h>
int main(void)
{
  int number; //variable to hold user input
  char ch; //variable to process initial input string
  
  //prompt user for input
  printf("Enter some text, an equal sign, and an integer:\n");
  
  //ignore all input up to the equal sign
  while ((ch = getchar()) != '=')
    continue;
    
  //read integer and assign to number variable
  scanf("%d", &number);
  
  //print user's integer
  printf("The integer you entered is: %d", number);
  
  return 0;
}