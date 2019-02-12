/************************************************
* filename: exercise3.c
* Exercise: Module 6, Exercise 3
* Name: Michael McCarron
* Date Created: January 29, 2019
*
* Description: This program prompts the user for 
* a filename, then opens the file counts the 
* number of all characters, spaces and newlines in 
* the file and outputs the results to the user.
*************************************************/

#include <stdio.h>
#define SLEN 81
int main(void)
{
    char file[SLEN]; //store filename
    FILE *in; //declare pointer to input file
    int ch; //read in character
    int character_count, space_count, newline_count = 0; //store character counts
    
    puts("This program will count characters, spaces, and newlines in a file.");
    puts("Enter filename:"); //prompt user for filename
    scanf("%80s", file); //get filename
    
    in = fopen(file, "r"); //open file in read text mode
    
    while((ch = getc(in)) != EOF) //iterate through file contents character by character
    {
        if(ch == ' ')               //if character is space
        {
            space_count++;            //increment counter for spaces
            character_count++; //increment counter for characters
        }
        else if(ch == '\n') //else if character is newline
        {
            newline_count++; //increment counter for newlines
            character_count++; //increment counter for characters
        }
        else                               //else,
        {
            character_count++; //increment counter for characters
        }
    }
    
    //print results, format strings for plural or singular counts
    printf("Your text contains %d %s, %d newline %s,"
           " and %d %s.", 
           
           space_count, 
           space_count == 1 ? "space" : "spaces",
           
           newline_count, 
           newline_count == 1 ? "character" : "characters", 
           
           character_count, 
           character_count == 1 
               ? "character total" : "characters total");
    
    
    return 0;
}