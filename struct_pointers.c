#include <stdio.h>

/* Here we declare the type so we can use it later */
struct antelope {
    int val;
    float something;
};

int main(void)
{
    struct antelope a;
    struct antelope *b; /* This is a pointer to a struct antelope */

    b = &a; /* let's point b at a for laughs and giggles */

    a.val = 3490; /* Normal struct usage, as we've already seen */

    /* since b is a pointer, we have to dereference it before we can use it */

    (*b).val = 3491;

    printf("The value of *b is: %d\n", a.val);

    /* That looks kinda bad, so let's do the exact same thing */
    /* Except this time we'll use the arrow operator, a bit of synctatic sugar. */

    b->val = 3500; /* EXACTLY THE SAME as (*b).val = 3491; */
    
    printf("The value of b is: %d\n", a.val);

    return 0;
}