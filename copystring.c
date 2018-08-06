#include <stdio.h>

int main(void)
{
    char *source = "Copy me!";
    char dest[20]; /* We'll copy that string into here */

    char *sp; /* source pointer */
    char *dp; /* destination pointer */

    for(sp = source, dp = dest; *sp != '\0'; sp++, dp++) {
        *dp = *sp;
    }

    printf("%s\n", dest); /* prints "Copy me!" */
}