#include "stdio.h"

void extern_func();

char s[100];

int main() {
    printf("Input string: ");
    scanf("%s", s);

    printf("<%s> is stored in s which is a static variable\n", s);
    extern_func();
}