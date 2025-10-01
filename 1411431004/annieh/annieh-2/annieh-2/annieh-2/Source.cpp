#include <stdio.h>

int main(void) {
    int score;

    // 輸入成績
    printf("請輸入一個整數成績 (max. 70): ");
    scanf("%d", &score);

    // 判斷是否及格
    if (score >= 60) {
        printf("恭喜通過!\n");
    }
    else {
        printf("再加油!\n");
    }

    return 0;
}
