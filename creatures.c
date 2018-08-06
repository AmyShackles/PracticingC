#include <stdio.h>

struct creature {
    float x;
    float y;
};

void execute_behavior (struct creature *c)
{
    c->x *= 10;
    c->y *= 10;
}

int main(void)
{
    int i;
    int a;
    struct creature guys[12] = {{4, 8}};

    /* initialize them - could be its own function */

    for (i = 0; i < 12; i++) {
        guys[i].x = (float)i; /* (float) is a cast - it changes the type */
        guys[i].y = (float)i;
    }
    for (a = 0; a < 10; a++) {
        for (i = 0; i < 12; i++) {
            execute_behavior(&(guys[i]));
        }
        for (i = 0; i < 12; i++) {
            printf("Creature %d: (%.2f, %.2f)\n", i, guys[i].x, guys[i].y);
        }
    }
}