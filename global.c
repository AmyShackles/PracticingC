#include <stdio.h>

/* This is a global variable.  We know it's global because it's been declared in "global scope" and not in a basic block somewhere */
int g = 10;

void afunc(int x)
{
    g = x; /* This sets the global to whatever x is */
}

int main(void)
{
    g = 10; /* Global g is now 10 */
    afunc(20); /* But this function will set it to 20 */
    printf("%d\n", g); /* So this will print "20" */

    return 0;
}