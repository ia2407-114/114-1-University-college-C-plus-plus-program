#include "Shape.h"

Cone::Cone(double r, double h) : radius(r), height(h) {}
double Cone::Volume() const {
    return (1.0 / 3.0) * 3.1415926535 * radius * radius * height;
}

Sphere::Sphere(double r) : radius(r) {}
double Sphere::Volume() const {
    return (4.0 / 3.0) * 3.1415926535 * radius * radius * radius;
}

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}
double Cylinder::Volume() const {
    return 3.1415926535 * radius * radius * height;
}