//prints characters in rows and columns

#include <stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
  int ch;  //character to be printed
  int rows, columns;  //number of rows and columns
  
  printf("Enter a character and two integers:\n");
  while ((ch = getchar()) != '\n')
  {
    if (scanf("%d %d", &rows, &columns) != 2 )
      break;
    display(ch, rows, columns);
    while (getchar() != '\n')
      continue;
    printf("Enter another character and two integers;\n");
    printf("Enter a newline to quit.");
  }
  
  return 0;
}

void display(char cr, int lines, int width)
{
  int row, col;
  
  for (row = 1; row <= lines; lines++)
  {
    for (col = 1; col <= width; col++)
      putchar(cr);
    putchar('\n'); //end line and start a new one
  }
}