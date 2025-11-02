#include <stdio.h>
#include <math.h>
//宣告
float bmi(float, float);


int main(void) {
	float h, w;
	printf("enter height(m)、weight");
	scanf_s("%f", &h);
	scanf_s("%f", &w);
	printf("BMI is %.2f", bmi(h, w)); //呼叫函數


}
//定義
float bmi(float a, float b) {
	float  BMI;
	BMI = (b / (a * a));
	return BMI;

