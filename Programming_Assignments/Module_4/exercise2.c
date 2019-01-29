/************************************************
* filename: exercise2.c
* Exercise: Module 4, Exercise 2
* Name: Michael McCarron
* Date Created: January 6, 2019
*
* Description: This program as the user to input
* two numbers of type double and prints them
* using a function.
*************************************************/

#include <stdio.h>
void print_doubles(double num1, double num2); //function prototype
int main(void)
{
    double num1, num2; //hold user input
    printf("Please input two double values:\n"); //prompt user for input
    scanf(" %lf %lf", &num1, &num2); //get user input
    print_doubles(num1, num2); //print out input
    
    return 0;
}

void print_doubles(double x, double y) //function definition
{
    printf("\nThanks, let me just confirm that these were your "
           "numbers again:\n");
    printf("%lf     %lf", x, y); //print x and y
    
    return;
}