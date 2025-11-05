#include <math.h>

// ===== 計算圓柱體積 V = π * r^2 * h =====
double cylinder_volume(double pi, double radius, double height) {
    return pi * pow(radius, 2) * height;
}
