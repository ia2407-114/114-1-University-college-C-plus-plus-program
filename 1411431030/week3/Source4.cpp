#include <stdio.h>

int main(void) {
    float height;
    float weight;
    float BMI = 0;
    printf("請輸入身高(m)\n");
    scanf_s("%f", &height);
    printf("請輸入體重(kg)\n");
    scanf_s("%f", &weight);
    printf("BMI為%f\n", BMI = weight / (height * height));
    if (BMI >= 27)
        printf("體重肥胖");
    if (BMI >= 24 && BMI < 27)
        printf("體重過重");
    if (BMI >= 18.5 && BMI < 24)
        printf("體重正常");
    if (BMI < 18.5)
        printf("體重過輕");
}