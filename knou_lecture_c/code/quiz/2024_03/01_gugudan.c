#include "stdio.h"

int main() {
    int su;
    int i = 1;
    printf("input : ");
    scanf("%d", &su);
    while (i < 10) {
        int result = su * i;
        printf("%d * %d = %d\n", su, i, result);
        i++;
    }
    return 0;
}