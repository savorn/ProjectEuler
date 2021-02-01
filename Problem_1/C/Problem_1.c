#include <stdio.h>

/*
Multiples of 3 and 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

int mult3or5 (int limit) {
    int totalSum = 0; /* variable for total sum */
    int y = 3; /* variable to check multiple of 3 or 5 */
    while (y < limit) { /* continue loop if y is less than limit */
        if (y % 3 == 0 || y % 5 == 0) { /* check if y is multiple of 3 or 5 */
            totalSum = totalSum + y; /* keep track of total sum */
        }
        y++; /* increment y by 1 after every loop */
    }
    return totalSum; /* return the total sum of multiple of 3 or 5 */
}

int main() {
    /* pass 1000 as argument to mult3or5 function & print the return value */
    printf("%d\n", mult3or5(1000));
    return 0;
}
