#include <stdio.h>

int main(void)
{
    int total = 0;
    int grade = 0;
    int times = 0;
    float arg;
    printf("輸入成績,輸入-1結束\n");
    while (grade != -1) {
        scanf_s("%d", &grade);
        total = total + grade;
        times += 1;
    }
    printf("average grade is %f", arg = float(total) / times);
    return 0;
}