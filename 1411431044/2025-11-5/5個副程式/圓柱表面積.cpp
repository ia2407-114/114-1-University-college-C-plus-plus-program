#include <math.h>

// ===== 計算圓柱表面積 A = 2 * π * r * (r + h) =====
double cylinder_surface(double pi, double radius, double height) {
    return 2.0 * pi * radius * (radius + height);
}
