#include "virtual.h"

// --- Cone 的實作 ---
Cone::Cone(double r, double h) : radius(r), height(h) {}

double Cone::Volume() const {
    return (1.0 / 3.0) * 3.14 * radius * radius * height;
}

// --- Sphere 的實作 ---
Sphere::Sphere(double r) : radius(r) {}

double Sphere::Volume() const {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

// --- Cylinder 的實作 ---
Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::Volume() const {
    return 3.14 * radius * radius * height;
}