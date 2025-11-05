#include <stdio.h>

// ===== Leibniz 公式近似計算 π =====
double approximate_pi(int n) {
    double pi_approx = 0.0;
    double sign = 1.0;

    for (int i = 0; i < n; i++) {
        double denominator = 2.0 * i + 1.0;
        pi_approx += sign * (4.0 / denominator);
        sign *= -1.0;  // 符號交替
    }

    return pi_approx;
}
