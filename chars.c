#include <stdio.h>

int main(void) {
    char a[20] = "Dogs are better.";
    char *p;

    p = a;
    p[0] = 'C';
    p[1] = 'a';
    p[2] = 't';
    p[3] = 's';

    printf("P is now: %s\n", p);
    printf("First letter of p is: %c\n", *p);
    printf("A is now: %s\n", a);
}