#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("%d\n", i == 10); /* i == 10 is true, so it's 1 */
    printf("%d\n", i > 20); /* i is not > 20, so this is false, 0 */
}