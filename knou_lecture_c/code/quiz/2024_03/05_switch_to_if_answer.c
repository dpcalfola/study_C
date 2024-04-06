#include "stdio.h"

int main() {
    int month;
    printf("몇월입니까 : ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        puts("그런 월은 없습니다!!\n");
        return 0;
    }

    if (month / 3 == 1) {
        puts("봄입니다.");
    } else if (month / 3 == 2) {
        puts("여름입니다.");
    } else if (month / 3 == 3) {
        puts("가을입니다.");
    } else if (month / 3 == 4 || month / 3 == 0) {
        puts("겨울입니다.");
    }

    return 0;
}
// 3, 4, 5 봄
// 6, 7, 8 여름
// 9, 10, 11 가을
// 12, 1, 2 겨울