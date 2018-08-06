#include <stdio.h>

/* Here we declare the type so we can use it later: */
struct stuff {
    int val;
    float b;
};

/* Note that we don't actually have any variables of that type, yet. */

int main(void)
{
    /* Okay, now let's declare a variable "s" of type "struct stuff" */
    struct stuff s;

    s.val = 3490; /* assignment into a struct ! */
    s.b = 3.14159;

    printf("The val field in s is: %d\n", s.val);
    printf("The b field in s is: %f\n", s.b);
}