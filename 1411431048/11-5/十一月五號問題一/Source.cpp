#include<stdio.h>
double compute_pi(int n);
double sphere_volume(double pi, double r);
double sphere_area(double pi, double r);
double cylinder_volume(double pi, double r, double h);
double cylinder_area(double pi, double r, double h);
int main(void) {
    int n;
    double r, h;

    printf("請輸入計算項目總數 n: ");
    scanf_s("%d", &n);

    printf("請輸入半徑 r: ");
    scanf_s("%lf", &r);

    printf("請輸入高 h: ");
    scanf_s("%lf", &h);

    // 呼叫副程式 1 計算 π 近似值
    double pi = compute_pi(n);

    // 呼叫其他副程式計算幾何值
    double sVol = sphere_volume(pi, r);
    double sArea = sphere_area(pi, r);
    double cVol = cylinder_volume(pi, r, h);
    double cArea = cylinder_area(pi, r, h);

    // 印出結果
    printf("\n以 %d 項近似計算的 pi = %.10f\n", n, pi);
    printf("球體積 = %.10f\n", sVol);
    printf("球表面積 = %.10f\n", sArea);
    printf("圓柱體積 = %.10f\n", cVol);
    printf("圓柱表面積 = %.10f\n", cArea);

    return 0;
}