/************************************************
* filename: exercise5.c
* Exercise: Module 5, Exercise 5
* Name: Michael McCarron
* Date Created: January 21, 2019
*
* Description: This program asks the user to input
* a character string, uses a function to reverse
* the order of the characters in the string,
* and prints out the reversed string.
*************************************************/

#include <stdio.h>
#include <string.h> //for fgets(), fputs(), strlen()

#define MAX 1000 //set max size for string
void *reverse(char string[], int n); //function prototype

int main(void)
{
    char string[MAX]; //store string
    
    printf("input a string: \n");// prompt user for input
    fgets(string, MAX, stdin); //get string from user
    
    reverse(string, strlen(string)); //reverse the string
    
    fputs(string, stdout); //print the reversed string

    return 0;
}


void *reverse(char string[], int n) //function definition
{
  char temp[n]; //store temporary string for reversal
  int i;
  int j = 0;
  
  /*store reversed string in temp[] */
  
  //iterate through string[] backwards, starting with highest index containing
  //a character other than NULL or '\n' placed in string by fgets(),
  //stop when it gets to the beginning of the string

  for (i = (n - 2); i >= 0; i--, j++) //i = (n-2), ignores the NULL character
  {                                   //and the '\n' character placed by fgets 
  
    temp[j] = string[i]; //place the value of string[i] in temp[j], 
                         //increment j for next pass
  }
  
  //copy reversed string in temp[] back into string[]
  for (i = 0; i < (n - 1); i++) 
  {
    string[i] = temp[i];
  }
}
