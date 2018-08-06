#include <stdio.h>

int main(void)
{
    int a[10] = { 10, 20, 30, 40, 55, /* 10 elements 2x5 */
                  10, 18, 21, 30, 44 };

    int i, j;

    for (i = 0; i < 2; i++) { /* for all the rows ... */
        for (j = 0; j < 5; j++) { /* print all the columns */
            int index = i*5 + j; /* calculate the index */
            printf("%d ", a[index]);
        }
        /* at the end of the row, print a newline for the next row */
        printf("\n");
    }

    return 0;
}