#include <stdio.h>

void main() {
    int sum1, sum2;

    // Case 1: Not initialized
    for (int i = 0; i <= 10; i++) {
        sum1 = sum1 + i;
    }

    // Result is not guaranteed
    printf("The case 1: sum1 does not initialized -> %d\n", sum1);



    // Case 2: Initialized
    sum2 = 0;
    for (int i = 0; i <= 10; i++) {
        sum2 = sum2 + i;
    }
    printf("The case 2: sum2 initialized as 0 -> %d\n", sum2);

}