#include <stdio.h>
float BMI(float height, float weight);
int main(void) {
    float height;
    float weight;
    printf("請輸入身高(m)\n");
    scanf_s("%f", &height);
    printf("請輸入體重(kg)\n");
    scanf_s("%f", &weight);
    printf("BMI為%f\n", BMI( height, weight));
    float a = BMI(height, weight);
    if (a >= 27)
        printf("體重肥胖");
    if (a >= 24 && a < 27)
        printf("體重過重");
    if (a >= 18.5 && a < 24)
        printf("體重正常");
    if (a < 18.5)
        printf("體重過輕");
}
float BMI(float height, float weight) {
 return weight / (height * height);
}
