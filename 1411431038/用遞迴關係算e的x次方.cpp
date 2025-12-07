#include <stdio.h>
#include <math.h>
double f(int n);      
double a(double x, int n); 
int main(void) {
    double x;
    int n;
    double result = 1.0;
    printf("Please enter x and n: ");
    scanf_s("%lf%d", &x, &n);
    for (int i = 1; i <= n; i++) {
        result = result + a(x, i) / f(i);
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
    return pow(x, n);
}