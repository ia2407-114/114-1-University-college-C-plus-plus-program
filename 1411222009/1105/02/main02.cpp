#include <stdio.h>

int Year(float, float, float, float);

int main() {

	float p, r, aim, add;

	printf("輸入本金 年利率 定期定額存入金額 存款目標\n");
	scanf_s("%f %f %f %f", &p, &r, &add, &aim);
	
	int year = Year(p, r, add, aim);

	printf("%d 年達成目標。\n", Year(p, r, add, aim));

}