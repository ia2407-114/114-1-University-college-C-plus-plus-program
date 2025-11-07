#include <stdio.h>

double approximate_pi(int);
double ball_volume(double, double);
double ball_surface_area(double, double);
double cylinder_Volume(double pi, double radius, double high);
double cylinder_Surface_area(double pi, double radius, double high);

int main(void)
{
	int n;
	double r;
	double h;
	
	printf("輸入要計算的項目數n:\n");
	scanf_s("%d", &n);
	
	printf("請輸入球體(圓柱)半徑的值:\n");
	scanf_s("%lf", &r);

	printf("請輸入圓柱的高:\n");
	scanf_s("%lf", &h);


	printf("pi 的近似值為: %lf\n", approximate_pi(n));
	printf("球體積為: %lf\n", ball_volume(approximate_pi(n), r));
	printf("球表面積為: %lf\n", ball_surface_area(approximate_pi(n), r));
	printf("圓柱體積為: %lf\n", cylinder_Volume(approximate_pi(n), r, h));
	printf("圓柱表面積為: %lf\n", cylinder_Surface_area(approximate_pi(n), r, h));
}