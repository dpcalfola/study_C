#include "stdio.h"

int main() {
    int score;

    // 임력 범위 오류시 재 질문
    while (1) {
        printf("0점에서 100 사이의 점수 입력 : ");
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            printf("잘못 입력하였습니다.\n");
        } else {
            break;
        }
    }

    if (score >= 90) {
        printf("%d점은 A학점입니다\n", score);
    } else if (score >= 80 && score < 90) {
        printf("%d점은 B학점입니다\n", score);
    } else if (score >= 70 && score < 80) {
        printf("%d점은 C학점입니다\n", score);
    } else if (score >= 60 && score < 70) {
        printf("%d점은 D학점입니다\n", score);
    } else {
        printf("%d점은 F학점입니다\n", score);
    }
    return 0;
}





// 90-100 A
// 80-89 B
// 70-79 C
// 60-69 D
// else F