#include <stdio.h>

int main(void)
{
    int num, result = 0, i;

    scanf("%d", &num); /* Read the number from the keyboard */

    for (i = 1; i <= num; i++) { /* Compute the result */
        result += 1;
    }

    printf("%d\n", result); /* output the result */

    return 0;
}