/************************************************
* filename: exercise5.c
* Exercise: Module 3, Exercise 5
* Name: Michael McCarron
* Date Created: January 2, 2019
*
* Description: This program reads a single 
* sentence, and encrypts it using a cipher that
* replaces vowels with 'Z' and removes all spaces
* in the sentence. It then prints the encrypted 
* sentence to the screen.
*************************************************/

//ask user for sentence
//evaluate each character in the sentence
//  if it is a space, do nothing
//  else if it is a vowel, place a Z into sentence array
//  else place it into sentence array

#include <stdio.h>
#include <ctype.h> //for tolower()
#define STOP '.' //define # as end of text to be analyzed

char character; //read in character
char sentence[100000]; //array to hold ciphered sentence
int index = 0; //index to map ciphered characters to result string

int main(void)
{
    //prompt user for input
    printf("Enter a single sentence (ending with a period) "
           "to be encrypted: \n");
    
    //evaulate characters until encountering a period
    while((character = getchar()) != STOP)
    {
        if(character == ' ')                //if character is a space,
            continue;                       //continue to next character
        
        switch(tolower(character))          //if character is a vowel
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                sentence[index] = 'Z';      //place Z into the sentence array
                index++;                    //and increment index counter
                break;
                
            default:                        //if not a vowel,
                sentence[index] = character;//place that character into the
                index++;                    //sentence array and increment 
                                            //index counter
        }
    }
    
    //print the entrypted sentence
    printf("\nHere is your encrypted sentence:\n");
    printf("%s.", sentence);
    
    return 0;
}