#include <stdio.h>

int main(void)
{
    double principal;   // 初始本金
    double rate;        // 年利率（例如 0.05 代表 5%）
    double annualDeposit; // 每年定期存款金額
    double goal;        // 存款目標
    double amount;      // 每年結束時的金額

    // 輸入資料
    printf("請輸入初始本金金額: ");
    scanf_s("%lf", &principal);

    printf("請輸入年利率（例如 5%% 請輸入 0.05）: ");
    scanf_s("%lf", &rate);

    printf("請輸入每年定期存款金額: ");
    scanf_s("%lf", &annualDeposit);

    printf("請輸入你的存款目標金額: ");
    scanf_s("%lf", &goal);

    // 初始化金額
    amount = principal;

    printf("\nYear\tAmount on deposit\n");

    unsigned int year;
    for (year = 1;; ++year) {
        // 先加上利息
        amount = amount * (1.0 + rate);

        // 再加上新的存款
        amount += annualDeposit;

        // 顯示當年金額
        printf("%4u\t%17.2f\n", year, amount);

        // 檢查是否達成目標
        if (amount >= goal) {
            printf("\n 達成目標金額 %.2f 所需年數: %u 年。\n", goal, year);
            break;
        }
    }

   

    return 0;
}
