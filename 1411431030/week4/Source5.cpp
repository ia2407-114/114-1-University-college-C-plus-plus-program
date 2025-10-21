#include <stdio.h>

int main()
{
    int grade = 0;
    unsigned int counter = 0;
    float total = 0;
    unsigned int pass = 0;
    unsigned int failure = 0;
    float arg;
    do {
        printf("輸入成績判斷是否通過,輸入-1停止\n");
        scanf_s("%d", &grade);
        counter += 1;
        total += grade;
        if (grade >= 60) {
            printf("通過\n");
            pass += 1;
        }
        else if (grade >= 0 && grade < 60) {
            printf("沒通過\n");
            failure += 1;
        }
    } while (grade != -1);
    printf("通過人數為%d\n", pass);
    printf("沒通過人數為%d\n", failure);
    printf("平均成績為%f\n", arg = float(total / counter));

}