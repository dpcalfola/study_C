#include "stdio.h"

int main() {
    int sum = 0;
    for (int i = 0; i <= 10; ++i) {
        sum += i;
    }
    printf("1부터 10까지의 합 : %d", sum);
}