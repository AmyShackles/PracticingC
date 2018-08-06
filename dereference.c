#include <stdio.h>

int main(void)
{
    int i;
    int *p; /* p is a pointer to an int; */

    p = &i; /* p is a pointer to the address of int */

    i = 10; /* i is now 10 */
    *p = 20; /* i is now 20!!! */

    printf("i is %d\n", i);  /* prints "20" */
    printf("i is %d\n", *p); /* "20"!  Deference-p is the same as i! */
    printf("p is %p\n", p);

    return 0;
}