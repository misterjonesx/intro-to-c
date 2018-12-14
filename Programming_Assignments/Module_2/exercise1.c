/************************************************
* filename: exercise1.c
* Exercise: Module 2, Exercise 1
* Name: Michael McCarron
* Date Created: December 10, 2018
*
* Description: This program prints all odd numbers 
* from 1 to 100, by incrementing the value of a 
* variable in a while loop.
*************************************************/

#include <stdio.h>

int num = 1; //define and initialize number variable

int main(void)
{
  
  while (num<100) //while loop that iterates until num is greater than 100
  {
    
    printf("%d\n", num); //print current value of num variable
    
    num += 2; //increment value of num by 2 during each iteration
    
  }
  
  return 0;
  
}