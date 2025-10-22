#include <stdio.h>

int main(void) {
    int n, i;
    double result = 0;
    double sign = 1;

    printf("輸入項數 n：");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        result = result + sign * (4.0 / (2 * i + 1)); 
        sign = -sign;
    }

    printf("值為：%f\n", result);

    return 0;
}
