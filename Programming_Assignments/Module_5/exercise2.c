/************************************************
* filename: exercise2.c
* Exercise: Module 5, Exercise 2
* Name: Michael McCarron
* Date Created: January 21, 2019
*
* Description: This program prints a 2 dimensional
* array of 5 user input numbers and their squares.
*************************************************/

#include <stdio.h>

const int ROW = 5; //# of rows in array
const int COL = 2; //# of columns in array

void print_results(int array[ROW][COL]); //printresults() prototype

int main(void)
{
    int i; //counter for for loops
    int arr[ROW][COL]; //declare array
    
    //prompt user for input
    printf("Please enter 5 integers: \n");
    
    //get user input and place into array at index [i][0]
    for (i = 0; i < ROW; i++)
    {
        scanf("%d", &arr[i][0]);
    }
    
    //iterate through array and assign square of value at index [i][0] to [i][1]
    for (i = 0; i < ROW; i++)
        arr[i][1] = arr[i][0] * arr[i][0];
    
    printf("\n");
    print_results(arr); //print results
    
    return 0;
}

//print results in desired format
void print_results(int array[ROW][COL]) //define print_results()
{
    int i, j; //counters for for loops
    
    printf("       Value     Squared\n"); //table headers
    for (i = 0; i < ROW; i++)//for rows in table
    {
        for (j = 0; j < COL; j++)//for columns in table
            printf("%12d", array[i][j]);//print value at array index[i][j]
            
        printf("\n");//add newline after each row is printed
    }
}