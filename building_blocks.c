/* Needs to take in user input, so may utilize scanf */
/* Needs to print numbers between 0 and the number, so should use for loop */
/* Needs to repeatedly take numbers, so maybe a while loop, actually */
/* Needs to exit if inputted number is less than or equal to 0 */

#include <stdio.h>

int main(void) 
{
    int num;

    scanf("%d", &num); /* Read input from keyboard */

    while (num > 0) {
        for (int i = 1; i < num; i++) {
            printf("%d\n", i);
        }
        scanf("%d", &num);
    }
}