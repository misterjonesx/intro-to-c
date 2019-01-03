/************************************************
* filename: exercise4.c
* Exercise: Module 3, Exercise 4
* Name: Michael McCarron
* Date Created: January 2, 2019
*
* Description: This program reads input until it
* encounters the # character, and then reports
* the number of characters, lines, and spaces
* read.
*************************************************/

#include <stdio.h>
#include <stdbool.h>
#define STOP '#' //define # as end of text to be analyzed

char character; //read in character
int number_of_spaces = 0; //number of spaces
int number_of_newlines = 0; //number of lines
int number_of_other_characters = 0; //number of other characters

int main(void)
{
    //prompt user for input
    printf("Enter text to be analyzed (# to terminate): \n");
    
    //evaulate characters until encountering a #
    while((character = getchar()) != STOP)
    {
        if(character == ' ')               //if character is space
            number_of_spaces++;            //increment counter for spaces
        else if(character == '\n')         //else if character is newline
            number_of_newlines++;          //increment counter for newlines
        else                               //else,
            number_of_other_characters++;  //increment counter for other chars
    }
    
    //print results, format strings for plural or singular counts
    printf("Your text contains %d %s, %d newline %s,"
           " and %d %s.", 
           
           number_of_spaces, 
           number_of_spaces == 1 ? "space" : "spaces",
           
           number_of_newlines, 
           number_of_newlines == 1 ? "character" : "characters", 
           
           number_of_other_characters, 
           number_of_other_characters == 1 
               ? "other character" : "other characters");
               
    return 0;
}
