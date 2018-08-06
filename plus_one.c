#include <stdio.h>

int plus_one(int n) /* THE DEFINITION */
{
    return n + 1;
}

int main(void)
{
    int i = 10, j;
    j = plus_one(i); /* THE CALL */

    printf("i + 1 is %d\n", j);

    return 0;
}