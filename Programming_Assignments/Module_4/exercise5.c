/************************************************
* filename: exercise5.c
* Exercise: Module 4, Exercise 5
* Name: Michael McCarron
* Date Created: January 6, 2019
*
* Description: This program ....
*************************************************/

#include <stdio.h>

void max_value(int * x, int * y); //function prototype

int main(void)
{
    int x, y; //store user input
    
    printf("Please enter two integers:\n"); //prompt user for input
    scanf(" %d %d", &x, &y); //get user input
    max_value(&x, &y); //calculate and assign max to both x and y
    printf("Both values are now: %d   %d", x, y); //print x and y (new values)
    
    return 0;
}

void max_value(int * x, int * y) //function definition
{
    if (*x > *y)       //if x > y,
        *y = *x;       //assign x's value to y
    else if (*y > *x)  //if y > x,
        *x = *y;       //assign y's value to x
    
    return;
}