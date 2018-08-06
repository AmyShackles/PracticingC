#include <stdio.h>

void increment (int a)
{
    a++; /* Will not work because not returning */
}

int main(void)
{
    int i = 10;

    increment(i);

    return 0;
}