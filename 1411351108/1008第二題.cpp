#include<stdio.h>
int main(void)
{

	float a, b, bmi;
	printf("請輸入身高(m)及體重(kg)\n");
	scanf_s("%f %f", &a, &b);
	printf("BMI:%f\n", (float)b / (a * a));
	bmi = b / (a * a);
	if (bmi < 18.5) {
		printf("體重過輕\n");
	}
	if ((bmi <= 24) && (bmi > 18.5)) {
		printf("體重適中\n");
	}
	if ((bmi >= 24) && (bmi < 27)) {
		printf("體重過重\n");
	}
	if (bmi > 27) {
		printf("肥胖\n");
	}
	return 0;


}