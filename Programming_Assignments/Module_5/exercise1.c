/************************************************
* filename: exercise1.c
* Exercise: Module 5, Exercise 1
* Name: Michael McCarron
* Date Created: January 21, 2019
*
* Description: This program puts prime numbers
* between 1 and 10,000 into an array and prints
* the five largest primes.
*************************************************/

#include <stdio.h>
#include <stdbool.h> //for bool, true, false

//for a number between 1 and 10,000
  //check if prime,
  //if prime,
    //add to array
  //if not prime, do nothing
//print array

int check_prime(int n); //tests a number and returns the number if prime
const int SIZE = 10001; //length of primes array

int main(void)
{
  int num; //numbers to check if prime
  int i = 0; //array index counter
  int primes[SIZE]; //array to hold primes
  int print_counter; //counter to print last 5 values added to array
  
  for (num = 0; num < SIZE; num++) //iterate through all values from 1 to 10000
  {
    if (check_prime(num) > 0) //check if num is prime, if prime,
    {
    primes[i] = check_prime(num); //add to primes array at index i
        i++; //increment the index for the next iteration
    }
  }

  //print results
  printf("Largest 5 prime numbers between 1 and 10,000 are: ");
  
  //print 4 most recent values added to primes array, with trailing comma
  for (print_counter = 4; print_counter > 0; print_counter--, i--)
  {
    printf("%d, ", primes[i-1]);
  }
  //print 5th most recent value added to primes array, without trailing comma
  printf("%d", primes[i-1]);
  
  return 0;
}

//check if number is prime
//if yes, return the number
//if no, return 0

int check_prime(int n)
{
  int divisor;
  bool is_prime;
  
  //iterate through divisors up to value of n, testing each to see if % operation reduces to 0
  for (divisor = 2, is_prime = true; divisor < n; divisor++)
  {
    //if number is divisible by divisor, not prime
    if(n % divisor == 0)
    {
      is_prime = false;
      break;
    }
  }
    
  if (is_prime == true) //if prime, return prime
  {
    return n;
  }
  
  else
    return 0;
    
}