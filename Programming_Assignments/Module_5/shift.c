#include <stdio.h>
#include <string.h>
#include <ctype.h>

void shift(char *);

int main(void)
{
  char string[10] = "0aBCDbcde";
  shift(string);
  puts(string);
}

void shift(char *string)
  {
    int i;
    int len = strlen(string);
    
    if (isupper(string[0]))
      {
      for (i = 1; i < len; i++)
        string[i] = toupper(string[i]);
      }
    else if (islower(string[0]))
      for (i = 1; i < len; i++)
        string[i] = tolower(string[i]);
        
  }