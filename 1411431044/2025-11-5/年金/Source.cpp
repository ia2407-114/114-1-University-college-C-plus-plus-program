#include <stdio.h>

// ===== 副程式原型宣告 =====
int years_to_aim(double principal, double rate, double deposit, double aim);

int main(void) {
    double p, r, deposit, aim;
    int years;

    // 取得使用者輸入
    printf("請輸入本金 (p): ");
    scanf_s("%lf", &p);

    printf("請輸入年利率 (r，例如0.05代表5%%): ");
    scanf_s("%lf", &r);

    printf("請輸入每年定期存入金額: ");
    scanf_s("%lf", &deposit);

    printf("請輸入存款目標 (aim): ");
    scanf_s("%lf", &aim);

    // 呼叫副程式計算達成目標所需年數
    years = years_to_aim(p, r, deposit, aim);

    // 輸出結果
    printf("\n需要 %d 年才能達成存款目標 %.2f 元\n", years, aim);

    return 0;
}
