#include <stdio.h>
int main() {
	int year;
	float p, r, aims, total;
	printf("輸入本金 年利率 存款目標\n");
	scanf_s("%f %f %f", &p, &r, &aims);
	total = p;

	for (year = 1; ; year++) {
		total = total * (1 + r);
		printf("第 %d 年本利合：%.2f\n", year, total);

		if (total >= aims) {
			break;
		}
	}
	
	printf("%d 年達成目標。\n", year);

	return 0;
}