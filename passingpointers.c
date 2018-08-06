#include <stdio.h>

void increment(int *p) /* note that it accepts a pointer to an int */
{
    *p = *p + 1; /* add one to p */
}

int main(void)
{
    int i = 10;

    printf("i is %d\n", i); /* prints "10" */
    
    increment(&i); /* note the address-of; turns it into a pointer */

    printf("i is %d\n", i); /* prints "11" */

    return 0;
}