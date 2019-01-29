/************************************************
* filename: exercise4.c
* Exercise: Module 4, Exercise 4
* Name: Michael McCarron
* Date Created: January 6, 2019
*
* Description: This program prompts the user for 
* two values of type long, then counts and
* displays the number of values entered that were
* negative.
*************************************************/

#include <stdio.h>

int negative_count(long num1, long num2); //function prototype
int main(void)
{
    long num1, num2; //store user input
    
    printf("Enter two integers of data type \"long\":\n"); //prompt user for input
    scanf(" %ld %ld", &num1, &num2); //get input
    
    printf("Number of negative numbers entered: %d", //print number of negative entries
           negative_count(num1, num2)); //function counts and returns number of negative values
    
    
    return 0;
}

int negative_count(long x, long y) //function definition
{
    int negatives = 0; //number of values that were negative
    if (x < 0)   //if x is negative
    negatives++; //increment negatives counter
    if (y < 0)   //if y is negative
    negatives++; //increment negatives counter
    return negatives; //return negatives value
}