#include <stdio.h>
#include <math.h>
double f(int n);
double a(double x, int n);
int main(void) {
    double terms[100];
    double x;
    int n;
    double result = 1.0;
    double term;
    printf("Please enter x and n: ");
    scanf_s("%lf%d", &x, &n);
    for (int i = 1; i <= n; i++) {
        term = a(x, i) / f(i);
        terms[i] = term;
        result = result + term;
        printf("terms %d = %lf\n", i, term);
    }
    printf("e 的 x 次方近似為：%lf\n", result);
    return 0;
}
double f(int n) {
    if (n <= 1)
        return 1.0;
    else
        return n * f(n - 1);
}
double a(double x, int n) {
    return x * pow(x, n - 1);
}