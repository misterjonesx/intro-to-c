#include <stdio.h>
char *strcpy(char *destination, const char *source);
#define MAX 100
int main(void)
{
  char string[MAX];
  char copy[MAX];
  printf("input a string: \n");// prompt user for input
  fgets(string, MAX, stdin);
  strcpy(copy, string);
  puts(copy);
    
  return 0;
}

char *strcpy(char *destination, const char *source)
{
  while (*source)
    *destination++ = *source++;
}