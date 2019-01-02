/************************************************
* filename: exercise2.c
* Exercise: Module 3, Exercise 2
* Name: Michael McCarron
* Date Created: January 2, 2019
*
* Description: This program prompts user for box
* dimensions, and then calculates volume and
* surface area. 
*************************************************/
#include <stdio.h>

double calc_surface_area(double l, double h, double w); //calc surface area function prototype
double calc_volume(double l, double h, double w); //calc volume function prototype

double length, height, width; //variables to hold user input of box dimensions
double surface_area, volume; // variables to hold output of calculations

int main(void)
{
  //prompt user for input
  printf("Enter a length, height, and width for your box to calculate its "
         "volume and surface area.\n");
  
  //get input from user, and control while loop
  while(scanf(" %lf%lf%lf", &length, &height, &width))
  {
    //check if any of the user's input values are negative or zero, if not continue
    if (length > 0 && width > 0 && height > 0)
    {
      //calculate volume and surface area, and print the results
      printf("The volume of your box is %.2f units cubed, and the surface area of your box "
             "is %.2f units squared.\n\n", calc_volume(length, height, width), 
             calc_surface_area(length, height, width));
      
      //prompt user for next set of measurements
      printf("Enter the next set of measurments or q to quit:\n");
    }
    
    //if any of the measurements was negative or zero, quit the program
    else
    {
      printf("\nYou entered a nonsensical measurement. I have no time for you"
             ".\nGoodbye.");
      break;
    }
  }
  
  return 0;
}

//calc surface area function definition
double calc_surface_area(double l, double h, double w) 
{
  surface_area = (2 * l * h) + (2 * h * w) + (2 * w * l);
  return surface_area;
}

//calc volume function definition
double calc_volume(double l, double h, double w) 
{
  volume = l * h * w;
  return volume;
}
