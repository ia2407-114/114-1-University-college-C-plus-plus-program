#include <stdio.h>


int main()
{
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf_s("%f", &weight);//%f輸入非整數

    printf("Enter height in meters: ");
    scanf_s("%f", &height);
    //&是取得x的變數
    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);//%.2f是算小數點後兩位

    //判斷
    if (bmi < 18.5)
        printf("BMI Category: Underweight\n");
    else if (bmi < 25.0)
        printf("BMI Category: Normal\n");
    else if (bmi < 30.0)
        printf("BMI Category: Overweight\n");
    else
        printf("BMI Category: Obese\n");

    return 0;
}
