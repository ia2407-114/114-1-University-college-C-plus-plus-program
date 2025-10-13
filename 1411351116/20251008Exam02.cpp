#include<stdio.h>
int main(void) {
	float weight, height;
	printf("輸入體重(kg)與身高(m）\n");
	scanf_s("%f %f", &weight, &height);
	float bmi = weight / (height * height);
	printf("BMI是%.2f\n", bmi);
	if (bmi < 18.5) {
		printf("Underweight\n");
	}
	if (18.5 < bmi && bmi < 24.9) {
		printf("Normal\n");
	}
	if (25 < bmi && bmi < 29.9) {
		printf("Overweight\n");
	}
	if (bmi >= 30) {
		printf("Obese\n");
	}













	return 0;
}