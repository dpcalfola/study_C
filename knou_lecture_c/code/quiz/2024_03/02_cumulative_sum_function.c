#include "stdio.h"

int cumulative_sum(int end_num);

int main() {
    int num1 = 10;
    int num2 = 100;

    printf("1부터 %4d까지의 합은 %d \n", num1, cumulative_sum(num1));
    printf("1부터 %4d까지의 합은 %d \n", num2, cumulative_sum(num2));

    return 0;
}

int cumulative_sum(int end_num) {
    int sum = 0;
    for (int i = 0; i <= end_num; ++i) {
        sum += i;
    }
    return sum;
}