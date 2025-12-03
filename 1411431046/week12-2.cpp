#include<stdio.h>
double pow(double x, int n) {
    if (n <= 0)
        return 1.0;
    else
        return x * pow(x, n - 1);
}

int factorial(int n) {
    if (n <= 0)
        return 1;
    else
        return n * factorial(n - 1);

}
int main() {
    int n;
    double x;
    double e = 1.0;


    printf("piease enter n¡G");
    scanf_s("%d", &n);

    printf("please enter x¡G");
    scanf_s("%lf", &x);
    for (int i = 1; i <= n; i++) {
        e += pow(x, i) / factorial(i);
    }

    printf("x^n = %.2f\n", pow(x, n));
    printf("n!  = %d\n", factorial(n));
    printf("e^x ªºªñ¦ü­È = %.10f\n", e);

    return 0;
}