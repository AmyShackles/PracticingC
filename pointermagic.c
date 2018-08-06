#include <stdio.h>

/* This code prints: */
/* 50 */
/* 99 */
/* 3490 */

int main(void)
{
    int a[4] = { 50, 99, 3490, 0 };
    int *p;

    p = a;
    while(*p > 0) {
        printf("%i\n", *p);
        p++; /* Go to the next int in memory */
    }
    
    return 0;
}