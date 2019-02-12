/************************************************
* filename: exercise1.c
* Exercise: Module 6, Exercise 1
* Name: Michael McCarron
* Date Created: January 29, 2019
*
* Description: This program, when run from the 
* command line with filenames listed, opens the 
* files, iterates through them, and sequentially
* prints the contents to the screen. It also uses
* argc to control a loop!
*************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //setup command line input
{
    FILE *in; //pointer-to-file for input files
    
    // check for command-line arguments
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    //print the filenames submitted by user
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    
    //read files and print contents
    printf("Here are the contents of those files:\n");
    printf("\n");
    
    //setup input
    int i;
    for (i = 1; i < argc; i++)           //loop argc - 1 times
    {    
        in = fopen(argv[i], "r");        //open argv[i] in read mode
        char ch;    //store character
        while ((ch = getc(in)) != EOF)   //if next character in file not EOF,
            putchar(ch);                 //print character to screen
    }
    printf("\n");
    
    return 0;
}