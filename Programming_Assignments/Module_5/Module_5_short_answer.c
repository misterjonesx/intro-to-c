1.1) long amounts[8];
1.2) float net_inc[12];
1.3) int daily_tot[12][31];
1.4) char * names[12][50];

2.1) pi + ii //valid
2.2) pi + pj //invalid
2.3) pi++    //valid (but nonsensical as pi is a pointer to int instead of pointer to an array)
2.4) pi - ii //valid
2.5) pi - pj //valid

3)  char *strcpy(char destination[], const char source[])
    {
      int i = 0;
      while (source[i])
      {  
        destination[i] = source[i];
        i++;
      }
    }

4)  char *strcpy(char *destination, const char *source)
    {
      while (*source)
        *destination++ = *source++;
    }

5) size_t twoD_strlen(int n, const char *arr1[n], const size_t arr2[n]);


6) 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void shift(char *);

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