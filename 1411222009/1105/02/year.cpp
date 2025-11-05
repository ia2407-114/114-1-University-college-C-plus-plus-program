

#include <stdio.h>

int Year(float p, float r, float add, float aim) {

	int year;
	float total = p;

	for (year = 1; ; year++) {
		total = total * (1 + r);
		total = total + add;
		printf("第 %d 年本利合：%.2f\n", year, total);

		if (total >= aim) {
			break;
		}
	}
	return year;
}