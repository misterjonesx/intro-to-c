/************************************************
* filename: exercise3.c
* Exercise: Module 2, Exercise 3
* Name: Michael McCarron
* Date Created: December 10, 2018
*
* Description: This program prompts the user for
* their name and information about a trip, and 
* calculates the duration of the trip.
*************************************************/

#include <stdio.h>

int main(void)
{
    int distance, speed; //declare variable to hold distance and speed user input
    char name[40]; //declare variable to hold name value in character array
    float duration; //declare variable to hold duration of the journey
    
    //prompt user for name
    printf("Dearest user, what be thy name?\n");
    
    //get user's name and assign to name variable
    scanf("%s", name);
    
    //prompt user for distance
    printf("\nThanks, %s. Now, how far will this trip of yours take you? (in miles, that is)\n", name);
    
    //get user's distance and assign to distance variable
    scanf("%d", &distance);
    
    //prompt user for speed
    printf("\nGreat, %s! And how fast will you be traveling for the duration? (in m.p.h. if you please)\n", name);
    
    //get user's speed and assign to speed variable
    scanf("%d", &speed);
    
    //calculate duration
    duration = distance / (float)speed;
    
    //print the user's input along with the results of the duration calculation
    printf("\n%s, your trip of %d miles at %d mph will take %.1f hours", name, distance, speed, duration);
    
    
    return 0;
}