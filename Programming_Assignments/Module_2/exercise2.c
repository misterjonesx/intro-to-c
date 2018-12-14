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
    int number; //variable to store user's number
    int counter = 11; //define and initialize counter variable to increment the while loop
    
    printf("Enter a positive number:\n"); //asks the user to enter a number
    scanf("%d", &number); //assigns that integer value to number variable
    printf("Here's your number, and ten more!\n\n"); //message to let the user know what's about to happen
    sleep(1); //short pause so that user has time to read the message
    while (counter > 0) //while loop that will run until counter is zero
        {
            printf("%d\n", number); //prints the value of number variable
            number += 1; //increments the number variable by 1
            counter -= 1; //decrements the counter variable by 1
        }
    
    return 0;
    
}