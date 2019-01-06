//an inefficient and faulty number guesser

#include <stdio.h>
int main(void)
{
  int guess = 1;
  
  printf("Pick an integer from 1 to 100, I will try to guess it:");
  printf(" Respond with a y if my guess is correct, and with an ");
  printf("if it's incorrect.\n");
  
  printf("Uh, is your number %d?\n", guess);
  
  while (getchar() != 'y') //get response, compare to y
  {
    printf("Well then, is it %d?\n", ++guess);
    while (getchar() != '\n') //skip rest of input line
      continue;
  }
  printf("I knew I could do it!");
  
  return 0;
}