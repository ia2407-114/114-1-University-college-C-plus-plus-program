#include <math.h>

// ===== 計算球體積 V = (4/3) * π * r^3 =====
double sphere_volume(double pi, double radius) {
    return (4.0 / 3.0) * pi * pow(radius, 3);
}
