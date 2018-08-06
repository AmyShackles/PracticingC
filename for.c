/* Using a while statement */
#include <stdio.h>

int main(void)
{
    /* print numbers between 0 and 9, inclusive: */
    int i = 0;
    while (i < 10) {
        printf("i is %d\n", i);
        i++;
    }
    /* do the same for a for-loop: */
    for (int a = 0; a < 10; a++) {
        printf("a is %d\n", a);
    }
}