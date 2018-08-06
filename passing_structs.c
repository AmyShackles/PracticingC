#include <stdio.h>

struct mutantfrog {
    int num_legs;
    int num_eyes;
};

void build_beejs_frog(struct mutantfrog *f)
{
    f->num_legs = 10;
    f->num_eyes = 1;
}

int main(void)
{
    struct mutantfrog rudolph;

    build_beejs_frog(&rudolph); /* Passing a pointer to the struct */
    
    printf("leg count: %d\n", rudolph.num_legs); /* prints "10" */
    printf("eye count: %d\n", rudolph.num_eyes); /* prints "1" */

    return 0;
}