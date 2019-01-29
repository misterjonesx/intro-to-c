#include <stdio.h>

int main(void)
{
  int num = 123;
  int diff;
  int sum;
  int * ptr1, * ptr2;
  
  diff = ptr1 - ptr2;
  
  sum = ptr1 + ptr2;
  
  //printf("ptr value %p , dereferenced pointer %d , pointer address %p\n", ptr, *ptr, &ptr);
  //printf("num value %u , num address %p", num, &num);
  //printf("dereferenced pointer %d", *ptr);

  //ptr++;
  //  printf("ptr value %p , dereferenced pointer %d , pointer address %p\n", ptr, *ptr, &ptr);

  
  
  return 0;
}