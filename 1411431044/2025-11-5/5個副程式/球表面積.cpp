#include <math.h>

// ===== 計算球表面積 A = 4 * π * r^2 =====
double sphere_surface(double pi, double radius) {
    return 4.0 * pi * pow(radius, 2);
}
