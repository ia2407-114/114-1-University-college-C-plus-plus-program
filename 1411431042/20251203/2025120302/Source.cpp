#include <stdio.h>

double power(double x, int n);
double factorial(int n);

int main() {
    int n;
    double x;

    printf("Enter n: ");
    scanf_s("%d", &n);

    printf("Enter x: ");
    scanf_s("%lf", &x);

    double ex = 0.0;

    for (int k = 0; k <= n; k++) {
        ex += power(x, k) / factorial(k);
    }

    printf("Approximate e^x = %lf\n", ex);

    return 0;
}
