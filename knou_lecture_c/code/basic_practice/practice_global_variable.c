#include <stdio.h>

// global variable
int a1 = 100;

void func1() {
    int a1 = 200;
    printf("The value of a1 in func1() is %d\n", a1);
}

int main() {
    printf("The value of a1 in main() is %d\n", a1);
    func1();
}