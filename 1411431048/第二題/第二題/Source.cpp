#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    printf("請輸入體重（公斤）與身高（公尺）\n");
    if (scanf_s("%f %f", &weight, &height) != 2 || height <= 0) {
        printf("輸入錯誤\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("你的BMI為：%.2f\n", bmi);
    if (bmi < 18.5) {
        printf("體重過輕\n");
    }
    else if (bmi < 24.9) {
        printf("體重正常\n");
    }
    else if (bmi < 29.9) {
        printf("體重過重\n");
    }
    else {
        printf("肥胖\n");
    }

    return 0;
}
