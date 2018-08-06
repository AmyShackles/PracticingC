#include <stdio.h>

int main(void)
{
    int age0;
    int age1;
    int age2;
    int age3;
    int age4;

    age0 = 5;
    printf("age 0 is %d\n", age0);
    
    age1 = 10;
    printf("age 1 is %d\n", age1);

    age2 = 15;
    printf("age 2 is %d\n", age2);

    age3 = 20;
    printf("age 3 is %d\n", age3);

    age4 = 25;
    printf("age 4 is %d\n", age4);

    int test[5];

    test[1] = 12;
    printf("test 1 is %d\n", test[1]);

    int a;
    int element[5] = {10, 20, 25, 8, 2};

    for (a = 0; a < 5; a++) {
        printf("element %d is %d\n", a, element[a]);
    }
}