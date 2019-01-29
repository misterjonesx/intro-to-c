/************************************************
* filename: exercise3.c
* Exercise: Module 5, Exercise 3
* Name: Michael McCarron
* Date Created: January 21, 2019
*
* Description: This program prompts the user for
* 10 integers, then displays the largest one.
*************************************************/

#include <stdio.h>

const int SIZE = 10; //set size of array equal to 10
int largest(int arr[SIZE]); //largest() prototype


int main(void)
{
    int i; //counter for for loop
    int array[SIZE]; //declare array to hold user input
    
    printf("Input %d integers:\n", SIZE); //prompt user for input
    
    for (i = 0; i < SIZE; i++) //for SIZE times
        scanf("%d", &array[i]); //get integer input and assign to arr[i]

    //print results    
    printf("\nThe largest value you entered was: %d", largest(array));
    
    return 0;
}

int largest(int arr[SIZE]) //function definition
{
    int largest = arr[0]; //set largest to value of first number in array
    int i; //counter for for loop
    
    for (i = 1; i < SIZE; i++) //iterate through array
        if (largest < arr[i])  //if largest is smaller than value of next array element
            largest = arr[i];  //assign that value to largest
    
    return largest; //return largest number
}