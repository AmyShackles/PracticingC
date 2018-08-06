/* showargs.c */

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    printf("There are %d things on the command line\n", argc);
    printf("The program name is \"%s\"\n", argv[0]);

    printf("The arguments are:\n");

    for (i = 1; i < argc; i++) {
        printf("   %s\n", argv[i]);
    }
    return 4;
}