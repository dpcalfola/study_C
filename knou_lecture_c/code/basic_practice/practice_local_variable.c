#include "stdio.h"

int main() {
    // Block A
    int x = 2, y = 4;
    printf("1st Block A \nx=%d, y=%d\n\n", x, y);
    {
        // Block B
        int x;
        x = 5;
        y++;
        printf("Block B\nx=%d, y=%d\n\n", x, y);
    }
    printf("2nd Block A\nx=%d, y=%d\n\n", x, y);
    return 0;
}

// I don't know why I should study this example.
// It is dangerous to use the same variable name in the same scope always.
// Nobody uses like this.
