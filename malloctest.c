#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    p = malloc(sizeof(int) * 12); /* Allocate for me 12 ints' worth of space */

    free(p);

    int *a;

    a = malloc(sizeof(float) * 3490); /* Allocate 3490 floats! */
    
    free(a);

    if (a == NULL) {
        printf("Horsefeathers!  We're probably out of memory!\n");
        exit(1);
    }
}