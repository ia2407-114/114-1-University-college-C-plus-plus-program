#include <stdio.h>

int calc_years(double p, double r, double deposit, double aim) {
    int year = 0;
    double total = p;

    while (total <= aim) {
        total = total * (1 + r) + deposit;  
        year++;
        printf("第 %d 年底，本利合為 %.2f\n", year, total);
    }

    return year;
}
