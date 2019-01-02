/************************************************
* filename: exercise2.c
* Exercise: Module 2, Exercise 2
* Name: Michael McCarron
* Date Created: December 10, 2018
*
* Description: This program prompts the user to
* enter an integer value, and then prints that
* value and the next 10 consecutive integer
* values.
*************************************************/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int number; //define variable to store user's number
    int counter = 11; //define and initialize counter variable to control the while loop
    
    printf("Enter a number:\n"); //asks the user to enter a number
    scanf("%d", &number); //assigns that integer value to number variable
    printf("\nHere's your number, and ten more!\n\n"); //message to let the user know what's about to happen
    sleep(1); //short pause so that user has time to read the message
    while (counter--) //checks that counter expression evaluates to TRUE, and then decrements counter variable by 1
        printf("%d\n", number++); //prints the number variable and then increments it by 1
    
    return 0;
    
}