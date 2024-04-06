#include <stdio.h>

int sum(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    int c = sum(a, b);

    printf("%d", c);

    return 0;
}

int sum(int a, int b) {
    return a + b;
};

