#include <stdio.h>

void init_array(int a[], int count)
{
    int i;

    /* for each element, set it equal to its index number times 10: */

    for (i = 0; i < count; i++)
        a[i] = i * 10;
}

int main(void)
{
    int mydata[10];

    init_array(mydata, 10); /* note lack of [] notation */

    return 0;
}