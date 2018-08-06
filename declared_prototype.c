#include <stdio.h>

int foo(void); /* This is the prototype! */

int main(void)
{
    int i;

    i = foo();

    printf("%d\n", i);

    return 0;
}

int foo(void) /* This is the definition, just like the prototype! */
{
    return 3490;
}