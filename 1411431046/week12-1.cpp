#include<stdio.h>
int factorial(int n) {
    if (n <= 0)
        return 1;
    else
        return n * factorial(n - 1);

}
int main() {
    int n;
    double e = 1.0;          

    printf("please enter n¡G");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        e += 1.0 / factorial(i);
    }

    printf("n! = %d\n", factorial(n));
    printf("e ªºªñ¦ü­È = %.10f\n", e);

    return 0;
}