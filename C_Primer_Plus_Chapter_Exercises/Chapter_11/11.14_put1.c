/* put1.c -- prints a string without adding \n */
/* good example of how to write string processing functions! */
#include <stdio.h>
void put1(const char * string) //string not altered
{
  while (*string != '\0') //can be coded simply as while(*string)
    putchar(*string++);
}