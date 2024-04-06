#include "stdio.h"

void gugudan(int su);

int main() {
    int dan;
    printf("input : ");
    scanf("%d", &dan);
    gugudan(dan);
}

void gugudan(int su) {
    for (int i = 0; i < 10; ++i) {
        printf("%d * %d = %d", su, i, (su * i));
    }
}