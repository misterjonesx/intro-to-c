/* put1.c -- prints a string without adding \n */
/* good example of how to write string processing functions, uses array notation! */
#include <stdio.h>
void put1(const char string[]) //string not altered (actual argument doesn't need to be an array)
{
  int i = 0;
  while (string[i] != '\0')
    putchar(string[i++]);
}