#include <stdio.h>

int main(void)
{
    int z =  1;  /* z is an integer variable */
    int  *p; /* declare variable p as a  pointer to an integer*/

/* until initialized, the  pointer points to random memory address, i.e. garbage */

    p =  &z;   /* assign the address of z to p  by use of ampersand */

    printf("z=%d  Address of z=%ld  and p=%ld \n", z, &z, p);

    *p =  5;   /* use the pointer to change the  value of z */

    printf("z=%d  \n",  z);  
    return  0;
 }