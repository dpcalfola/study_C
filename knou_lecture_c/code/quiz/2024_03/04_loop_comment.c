#include "stdio.h"

int main() {

    // 5회 반복
    // i -> 0, 1, 2, 3, 4
    for (int i = 0; i < 5; i++) {

        // 앞 문자: 0개부터 4개까지 .을 한 라인에 출력
        for (int j = 0; j < i; j++) {
            printf(".");
        }

        // 앞 문자가 끝나면 하트 출력
        printf("♡");

        // 뒷 문자: 4개부터 0개까지 .을 한 라인에 출력
        // 첫재 줄: j = 4, i = 0
        //      -> 4, 3, 2, 1
        //      -> 4개
        // 둘째 줄: j = 3, i = 1
        //      -> 4, 3, 2
        //      -> (j==1 > i==1) => false
        for (int j = 4; j > i; j--) {
            printf(".");
        }

        // Line break
        printf("\n");
    }
    return 0;
}
