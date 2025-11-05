#include<stdio.h>

double approximate_pi(int n);
double ball(double, double);
double ball_surface_area(double, double);
double cylinder_volume(double, double, double);
double Cylinder_surface_area(double, double, double);

int main(void) {
	int n = 0;
	double r;
	double h;
	printf("enter one interger¡G");
	scanf_s("%d", &n);
	printf("enter r¡G");
	scanf_s("%lf", &r);
	printf("enter h¡G");
	scanf_s("%lf", &h);
	printf("approximate_pi¡G%lf\n", approximate_pi(n));
	printf("ball¡G%lf\n", ball(approximate_pi(n), r));
	printf("ball_surface_area¡G%lf\n", ball_surface_area(approximate_pi(n), r));
	printf("cylinder_volume¡G%lf\n", cylinder_volume(approximate_pi(n), r, h));
	printf("Cylinder_surface_area¡G%lf\n", Cylinder_surface_area(approximate_pi(n), r,h));
}
double approximate_pi(int n) {
	double pi = 0.0;
	for (int i = 0;i < n;i++) {
		if (i % 2 == 0) {
			pi = pi + (4.0 / (i * 2.0 + 1.0));
		}
		else {
			pi = pi - (4.0 / (i * 2.0 + 1.0));
		}

	}
	return pi;
}
double ball(double pi, double r) {
	return (4.0 / 3.0) * pi * r * r * r;
}
double ball_surface_area(double pi, double r) {
	return 4.0 * pi * r * r;
}
double cylinder_volume(double pi, double r, double h) {
	return pi * r * r * h;
}
double Cylinder_surface_area(double pi, double r, double h) {
	return (2.0 * pi * r * r) + (2 * pi * r * h);
}



