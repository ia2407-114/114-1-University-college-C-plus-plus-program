#include <stdio.h>

float MY_BMI(float weightkilograms, float heightmeters);

int main(void) {
    float weightkilograms, heightmeters, BMI;

    printf("Enter your weightkilograms and heightmeters: ");
    scanf_s("%f %f", &weightkilograms, &heightmeters);

    BMI = MY_BMI(weightkilograms, heightmeters);

    if (BMI > 30)
        printf("Your BMI is %.2f (Obese)\n", BMI);
    else if (BMI > 25)
        printf("Your BMI is %.2f (Overweight)\n", BMI);
    else if (BMI > 18.5)
        printf("Your BMI is %.2f (Normal)\n", BMI);
    else
        printf("Your BMI is %.2f (Underweight)\n", BMI);

    return 0;
}

float MY_BMI(float weightkilograms, float heightmeters) {
    float BMI;
    BMI = weightkilograms / (heightmeters * heightmeters);
    return BMI;
}