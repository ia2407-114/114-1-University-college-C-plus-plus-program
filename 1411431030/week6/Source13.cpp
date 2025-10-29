#include <stdio.h>

float BMI(float,float);

int main(void) {
    float height;
    float weight;
    printf("請輸入身高(m)\n");
    scanf_s("%f", &height);
    printf("請輸入體重(kg)\n");
    scanf_s("%f", &weight);
    printf("BMI為%f\n", BMI(height,weight));
    float p = BMI(height, weight);
    if (p >= 27)
        printf("體重肥胖");
    if (p >= 24 && p < 27)
        printf("體重過重");
    if (p >= 18.5 && p < 24)
        printf("體重正常");
    if (p < 18.5)
        printf("體重過輕");
}

float BMI(float a, float b) {
    return b / (a * a);
}