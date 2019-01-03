/************************************************
* filename: exercise3.c
* Exercise: Module 3, Exercise 3
* Name: Michael McCarron
* Date Created: January 2, 2019
*
* Description: This program checks to see if a 
* number is prime.
*************************************************/

#include <stdio.h>
#include <stdbool.h> //for bool, true, false

unsigned long number, divisor; //variables to hold user input and divisor
bool is_prime; //flag to control output

int main(void)
{
  //get input from the user
  printf("Enter an integer to be tested if a prime number, q to quit:\n");
  
  //while input is an integer, continue
  while(scanf("%lu", &number) == 1)
  {
    //initialize divisor and is_prime, enter the loop if divisor is smaller than
    //user's input, and then increment the divisor
    for(divisor = 2, is_prime = true; divisor < number; divisor++)
    {
      //if number is divisible by divisor, not prime
      if(number % divisor == 0)
      {
        //print result, set is_prime flag to false, and break out of the for loop
        printf("The number is not prime because it is divisible by %lu.",
        divisor);
        is_prime = false;
        break;
      }
    }
    //after exiting for loop,
    //if is_prime is false, number was not a prime, so skip this statement
    //if is_prime is true, number is a prime, so print this result
    if(is_prime)
      printf("The number is prime.");
    
    //prompt user for next number  
    printf("\n\nEnter an integer to be tested if a prime number, q to quit:\n");
  }
  
  return 0;
}