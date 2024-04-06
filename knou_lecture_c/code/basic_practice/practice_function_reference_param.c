#include "stdio.h"

void swap(int *x, int *y);

int main() {
    int a, b;
    a = 10;
    b = 20;

    printf("Before swap\na is %d, b is %d", a, b);
    printf("\n\n");

    swap(&a, &b);
    printf("After swap\na is %d, b is %d", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

// *a -> The value that stored in the address of the variable a
// &a -> The address of the variable a

// &a -> a 가 할당된 주소 (포인터)
// *a -> a 변수에 실제로 보관된 값

