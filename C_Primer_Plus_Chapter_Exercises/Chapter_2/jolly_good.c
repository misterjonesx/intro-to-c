#include <stdio.h>

int jolly(void)
{
  printf("For he's a jolly good fellow!\n");
  
  return 0;
}

int deny(void)
{
  
  printf("Which nobody can deny!");
  
  return 0;
}

int x = 3;

int main(void)
{
  while (x>0)
  {
    jolly();
    x -= 1;
  }
  deny();
  
  return 0;
  
}