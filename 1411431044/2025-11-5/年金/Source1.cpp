#include <stdio.h>

// ===== 副程式：計算達成存款目標所需年數 =====
int years_to_aim(double principal, double rate, double deposit, double aim) {
    int years = 0;
    double balance = principal;  // 初始本金

    // 每年計算利息 + 定期存款，直到達到目標
    while (balance < aim) {
        balance += balance * rate;  // 計算利息
        balance += deposit;         // 每年定期存入金額
        years++;                    // 年數累加
    }

    return years;  // 回傳需要的年數
}
