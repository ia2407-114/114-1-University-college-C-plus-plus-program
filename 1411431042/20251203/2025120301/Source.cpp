#include <stdio.h>

double factorial(int n);

int main() {
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);

    double e = 0.0;

    for (int k = 0; k <= n; k++) {
        e += 1.0 / factorial(k);
    }
    printf("ªñ¦ü e = %lf\n", e);
    return 0;
}
