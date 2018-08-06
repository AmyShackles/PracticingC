#include <stdio.h>

enum fishtypes {
    HALIBUT,
    TUBESNOUT,
    SEABASS,
    ROCKFISH
};

int main(void)
{
    enum fishtypes fish1 = SEABASS;
    enum fishtypes fish2;

    if (fish1 == SEABASS) {
        fish2 = TUBESNOUT;
    }

    printf("fish2 is: %d\n", fish2);

    return 0;
}