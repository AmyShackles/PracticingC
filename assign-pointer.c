#include <stdio.h>

int main(void)
{
    int i;  /* i's type is "int" - integer */
    int *p; /* p's type is "pointer to an int or int-pointer" */

    p = &i; /* p now "points to" i */

    return 0;
}