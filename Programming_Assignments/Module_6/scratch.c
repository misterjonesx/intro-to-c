#include <stdio.h>
#define LEN 5

int main(void)
{
  int a[LEN] = {0, 1, 2, 3, 4};
   FILE * fp;
   fp = fopen("adata.out", "wb"); //"ab" will append the contents of a[5] to the file adata.out than overwriting it
   for (int i = 0; i < LEN; i++) //
   {
     fwrite(a, sizeof (int), LEN, fp);
   }
  
  return 0;
}