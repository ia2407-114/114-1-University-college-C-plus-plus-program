#include <stdio.h>
#include <math.h>

/* ===============================
   🔹 函數原型宣告（Function Prototypes）
   =============================== */
double approximate_pi(int n);                               // 用 Leibniz 公式近似計算 π
double sphere_volume(double pi, double radius);              // 計算球體積
double sphere_surface(double pi, double radius);             // 計算球表面積
double cylinder_volume(double pi, double radius, double height);  // 計算圓柱體積
double cylinder_surface(double pi, double radius, double height); // 計算圓柱表面積


/* ===============================
   🔸 主程式開始
   =============================== */
int main(void) {
    int n;          // 計算 π 時使用的項數
    double r, h;    // 半徑與高度
    double pi;      // 儲存近似 π 值

    // 取得使用者輸入的項數 n
    printf("輸入要計算π的項數 n: ");
    scanf_s("%d", &n);

    // 呼叫 approximate_pi() 來計算 π
    pi = approximate_pi(n);
    printf("\n近似π值 = %.10f\n", pi);

    // 取得球與圓柱的尺寸
    printf("\n輸入球半徑 r: ");
    scanf_s("%lf", &r);

    printf("輸入圓柱高度 h: ");
    scanf_s("%lf", &h);

    // 🔹 輸出與呼叫副程式合併進行
    printf("\n=== 計算結果 ===\n");

    printf("球體積: %.6f\n", sphere_volume(pi, r));
    printf("球表面積: %.6f\n", sphere_surface(pi, r));
    printf("圓柱體積: %.6f\n", cylinder_volume(pi, r, h));
    printf("圓柱表面積: %.6f\n", cylinder_surface(pi, r, h));

    return 0;
}


