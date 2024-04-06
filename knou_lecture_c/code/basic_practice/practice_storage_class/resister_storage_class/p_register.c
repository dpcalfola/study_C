#include "stdio.h"

int main() {

    register int i;
    int sum = 0;

    // Check initial value of register variable
    printf("TEST2: i=%d\n", i);

    // Wrong example
    // I declared auto variable i in the for loop so that the register variable i is not used.
    for (int i = 0; i <= 10; ++i) {
        sum += i;
        // Check the value of i and sum
        printf("TEST1 (wrong example): i=%d, sum=%d\n", i, sum);
    }

    // Correct Example
    for (i = 0; i <= 10; ++i) {
        sum += i;
        // Check the value of i and sum
        printf("TEST1: i=%d, sum=%d\n", i, sum);
    }

    // ++i makes add 1 at the end of the for loop
    i -= 1;

    printf("i=%d, sum=%d", i, sum);
    return 0;
}

// I think that the i variable in the for loop is just local variable but not register variable.
// -> I was wrong and find out that important concept of for loop counter value.

