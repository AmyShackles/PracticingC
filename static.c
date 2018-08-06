#include <stdio.h>

void print_plus_one(void)
{
    static int a=0; /* static storage class! */

    printf("%d\n", a);

    a++;  /* increment the static value */
}

int main(void)
{
    print_plus_one();  /* prints "0" */
    print_plus_one(); /* prints "1" */
    print_plus_one(); /* prints "2" */
    print_plus_one(); /* prints "3" */
    print_plus_one(); /* prints "4" */

    return 0;
}