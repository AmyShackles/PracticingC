#include <stdio.h>

int main(void)
{  /* start of basic block */
    int a = 5; /* local to main() */

    if (a != 0) {
        int b = 10; /* local to if basic block */

        a = b; /* perfectly legal -- both a and b are visible here. */
    }

    /* b = 12; */ /* ERROR -- b is not visible - only in the if block */

    {  /* notice I started a basic block with no statement - this is legal */
        int c = 12;
        int a; /* HEY!  Wait!  There is already an 'a' out in main! */

        /* the a that is local to this block hides the a from main */
        a = c; /* This modified the a local to this block to be 12 */
    }

    /* But this a back in main is still 10, since it was set in the if block: */
    printf("%d\n", a);

    return 0;
}