#include <stdio.h>
#include <math.h>

// 原型宣告
float BBMI(float, float);

int main(void)
{
    float h, w;

    
    for (int i = 1; i <= 10; ++i) {
        printf("Please enter height and weight :");
        scanf_s("%f %f", &h, &w);

        printf("第 %d 次輸入結果:\n", i);
        printf("BMI value is %.2f\n", BBMI(h, w));

        float BMI = BBMI(h, w);

        if (BMI < 18.5)
            printf("Underweight\n");
        else if (BMI >= 18.5 && BMI <= 24.9)
            printf("Normal range\n");
        else if (BMI >= 25 && BMI <= 29.9)
            printf("Overweight\n");
        else
            printf("Obese\n");

        puts(""); 
    }

    puts("Program finished!");
    return 0;
}


float BBMI(float height, float weight)
{
    float bmi;
    bmi = weight / ((height / 100) * (height / 100));
    return bmi; //浮點數結果
}