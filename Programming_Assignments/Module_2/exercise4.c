/************************************************
* filename: exercise4.c
* Exercise: Module 2, Exercise 4
* Name: Michael McCarron
* Date Created: December 10, 2018
*
* Description: This program converts seconds to 
* hours and minutes.
*************************************************/

#include <stdio.h>

unsigned long long seconds; //variable to hold seconds value input by user
unsigned long long hours; //variable to hold number of hours
double minutes; //variable to hold number of minutes
const int SECONDS_IN_HOUR = 3600; //define and initialize constant # of seconds in an hour
const int SECONDS_IN_MINUTE = 60; //define and initialize constant # of seconds in a minute

int main(void)
  {
    //prompt the user to input a number of seconds
    printf("Hey there user! I will convert seconds to hours and minutes for"
           "you. ");
    printf("\nGo ahead and input a number of seconds (q to quit):\n");


    //While loop test expression gets user input and checks that it 
    //evaluates to TRUE. 
    //If a character of type char is entered, the while loop will terminate.
    while(scanf("%llu", &seconds)) 
    {
      //caculates the number of hours
      hours = seconds / SECONDS_IN_HOUR; 
      
      //calculates the number of minutes
      minutes = (float)(seconds % SECONDS_IN_HOUR) / (float)SECONDS_IN_MINUTE;
      
      //prints the user's input and calculated values in the target phrase
      printf("\n%llu seconds is %llu hours and %1.2f minutes\n", seconds, hours, 
        minutes);
        
      //prompts the user for additional input  
      printf("\nInput a number of seconds (q to quit):\n");
    }
    
    return 0;
  }