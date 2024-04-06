#include "stdio.h"

// Global variable default value is 0
// But not recommended that do not initialize the global variable
int x;

void func1();

int main() {
    x = 10;
    printf("The value of x is %d\n", x);
    func1();
    printf("The value of x is %d\n", x);
}

void func1() {
    x++;
}