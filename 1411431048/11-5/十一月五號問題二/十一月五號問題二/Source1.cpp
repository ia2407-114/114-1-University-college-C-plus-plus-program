
#include <stdio.h>
// 副程式：計算達成目標所需的年數
int calculateYears(double p, double r, double deposit, double aim) {
    int years = 0;

    printf("\n年份\t年末金額\n");
    printf("----------------------\n");

    while (p < aim) {
        // 每年年底本金成長 (複利)
        p = p * (1 + r);
        // 每年底再定期存入固定金額
        p += deposit;
        years++;

        printf("%3d\t%.2f\n", years, p);
    }

    return years;
}
