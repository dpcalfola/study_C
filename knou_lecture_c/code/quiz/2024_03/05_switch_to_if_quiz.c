#include "stdio.h"

int main() {
    int month;
    printf("몇월입니까 : ");
    scanf("%d", &month);

    switch (month) {
        case 3 :
        case 4 :
        case 5 :
            puts("봄입니다.");
            break;
        case 6 :
        case 7 :
        case 8 :
            puts("여름입니다.");
            break;
        case 9 :
        case 10 :
        case 11 :
            puts("가을입니다.");
            break;
        case 12 :
        case 1 :
        case 2 :
            puts("겨울입니다.");
            break;
        default:
            puts("그런 월은 없습니다!!\n");
            break;
    }
    return 0;
}

// 3, 4, 5 봄
// 6, 7, 8 여름
// 9, 10, 11 가을
// 12, 1, 2 겨울