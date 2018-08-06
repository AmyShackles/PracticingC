/* using a while statement: */
#include <stdio.h>

int main(void)
{
    int i = 10;
    /* this is not executed because i is not less than 10: */
    while (i < 10) {
        printf("while: i is %d\n", i);
        i++;
    }
    /* using a do-while statement: */
    /* this is executed once, because the continuation condition is not checked until after the body of the loop runs: */
    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);

    printf("All done!\n");

}