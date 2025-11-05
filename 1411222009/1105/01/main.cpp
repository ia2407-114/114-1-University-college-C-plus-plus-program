#include <stdio.h>

double Pi(int); 
double Ball(double, double);
double Ball02(double, double);
double Cylinder01(double, double, double);
double Cylinder02(double, double, double);

int main(void) {
	int n;
	double r; 
	double h; 

	printf("輸入項目數量: ");
	scanf_s("%d", &n);
	printf("輸入球體半徑: ");
	scanf_s("%lf", &r);
	printf("輸入圓柱體的高: ");
	scanf_s("%lf", &h);

	printf("pi 近似值: %lf\n", Pi(n));
	printf("球體積 近似值: %lf\n",Ball(Pi(n), r));
	printf("球表面積 近似值: %lf\n", Ball02(Pi(n), r));
	printf("圓柱體積 近似值: %lf\n", Cylinder01(Pi(n), r, h));
	printf("圓柱表面積 近似值: %lf\n", Cylinder02(Pi(n), r, h));
}
