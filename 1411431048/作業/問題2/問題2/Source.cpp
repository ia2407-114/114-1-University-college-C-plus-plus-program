#include <iostream>

int main()
{
    int num1;
    printf("輸入一個整數成績\n");
    scanf_s("%d", &num1);
    if (num1 >= 60) {
        printf("恭喜通過");

    };
    if (num1 < 60) {
        printf("再加油");
    };
    return 0;
}