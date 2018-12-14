#include <stdio.h>
#include <string.h>  //for strlen() prototype
#define DENSITY 62.4  // human density in lbs per sq. foot

int main(void)
{
  float weight, volume;
  int size, letters;
  char name[40]; //name is an array of 40 characters
  
  printf("Hi! What's your name?\n");
  scanf("%s", name);
  printf("%s, what's your weight in pounds?\n", name);
  scanf("%f", &weight);
  size = sizeof name;
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
  printf("Also, your first name has %d letters,\n", letters);
  printf("and we have %d bytes to store it.", size);
  
  return 0;
}