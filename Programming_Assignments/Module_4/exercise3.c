/************************************************
* filename: exercise3.c
* Exercise: Module 4, Exercise 3
* Name: Michael McCarron
* Date Created: January 6, 2019
*
* Description: This program prompts the user to
* enter a character and an integer (n), and then
* prints the character n number of times.
*************************************************/

#include <stdio.h>

void repeat_character(char ch, int n); //function prototype

int main(void)
{
    char ch; //store char input
    int n; //store int input
    printf("Enter a character and an integer:\n"); //prompt user for input
    scanf(" %c %d", &ch, &n); //get input
    repeat_character(ch, n); //print output
    
    return 0;
}

void repeat_character(char cr, int x) //function definition
{
    int i; //counter for for loop
    for (i = 0; i < x; i++) //for x number of times,
        printf("%c ", cr);  //print cr and " "
}