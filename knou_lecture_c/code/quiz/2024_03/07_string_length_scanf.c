#include "stdio.h"
#include "string.h"

int main() {
    unsigned long i;
    char temp[100];

    printf("input : ");

    scanf("%s", temp);

    // Test: 배열 요소 출력하되 개행문자는 제거
    printf("\nTest1 - 배열 요소 출력\n");
    for (int j = 0; j < strlen(temp) - 1; j++) {
        printf("%c", temp[j]);
    }
    printf("\n\n");

    // 문자열 출력
    printf("문자열: %s", temp);

    // strlen 함수 사용
    printf("the string length : %lu", (strlen(temp) - 1));
    return 0;
}

// 왜 숫자를 입력 받을때는 포인터 변수를 넣는데 문자를 입력받을때는 변수 이름을 넣는지?

// scanf() 는 공백을 포함한 문자열을 받기 어려움 (정규식 사용 필요)
//