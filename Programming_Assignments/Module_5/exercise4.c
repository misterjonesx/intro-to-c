/************************************************
* filename: exercise4.c
* Exercise: Module 5, Exercise 4
* Name: Michael McCarron
* Date Created: January 21, 2019
*
* Description: This program asks the user to input
* 10 values, uses a function to sort the values,
* and then prints the sorted values.
*************************************************/

#include <stdio.h>

const int SIZE = 10;
void sort(int arr[SIZE]); //function prototype

int main(void)
{
    int i; //counter for for loop
    int array[SIZE]; //declare array to hold user input
    
    printf("Input %d integers:\n", SIZE); //prompt user for input
    
    for (i = 0; i < SIZE; i++) //for SIZE times
        scanf("%d", &array[i]); //get integer input and assign to arr[i]
        
    sort(array);

    //print results   
    printf("\nHere are the integers you entered from lowest to highest:\n");
    for (i = 0; i < SIZE; i++) //iterate through elements in array
        printf("%d ", array[i]); //print value at index i
    
    return 0;
}

void sort(int arr[SIZE]) //function definition
{
    int i, j; //counters for for loops
    int temp; //store temporary value for swap
    
    for (i = 0; i < SIZE-1; i++) //iterate through the array SIZE-1 times
    {                            //no need to pass through SIZE times, 
                                 //as sort will complete in 1 fewer pass
                                 //even if list is reverse sorted
    
        for (j = 0; j < SIZE-i-1; j++) //iterate through values in array, 
        {                              //last i items already in place at end of array,
                                       //so no need to pass through those
        
            if (arr[j] > arr[j+1]) //if value at index i is greater than next value in array,
            {                      //swap the values
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}