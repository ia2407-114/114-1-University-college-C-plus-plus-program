#include<stdio.h>

int main(void)
{
    float h, w, bmi;
    printf("請輸入您的身高(公尺):\n");
    scanf_s("%f", &h);
    printf("請輸入您的體重(公斤):\n");
    scanf_s("%f", &w);

    bmi = w / (h * h);
    printf("你的BMI是:%.2f\n", bmi);

    if (bmi < 18.5)
        printf("體重過輕\n");
    else if (bmi < 24.9)
        printf("正常範圍\n");
    else if (bmi < 29.9)
        printf("過重\n");
    else
        printf("超級重");

    return 0;
}