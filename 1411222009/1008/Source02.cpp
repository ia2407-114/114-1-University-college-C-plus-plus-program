#include <stdio.h>

int main(void) {

	float a, b, bmi;

	printf("請輸入身高(m) 體重(kg): \n");
	scanf_s("%f %f", &a, &b);

	bmi = b / (a * a);
	printf("BMI is %f\n", bmi);

	printf("\nBMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");

	if (bmi < 18.5)
		printf("\nYou are underweight.\n");
	else if (bmi < 25)
		printf("\nYou are normal weight.\n");
	else if (bmi < 30)
		printf("\nYou are overweight.\n");
	else
		printf("\nYou are obese.\n");

	return 0;

}
