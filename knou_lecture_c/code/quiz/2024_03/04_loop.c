#include "stdio.h"

int main() {

    for (int i = 0; i < 5; i++) {

        // 앞 문자: 0개부터 4개까지 .을 한 라인에 출력
        for (int j = 0; j < i; j++) {
            printf(".");
        }

        // 앞 문자가 끝나면 하트 출력
        printf("♡");

        // 뒷 문자: 4개부터 0개까지 .을 한 라인에 출력
        for (int j = 4; j > i; j--) {
            printf(".");
        }

        // Line break
        printf("\n");
    }
    return 0;
}
