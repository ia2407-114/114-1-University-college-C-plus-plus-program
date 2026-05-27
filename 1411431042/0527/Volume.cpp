#include "volume.h"

const double PI = 3.14159;

//  Cylinder 

Cylinder::Cylinder(double r, double h)
    : radius(r), height(h) {
}

double Cylinder::volume() const {
    return PI * radius * radius * height;
}

//  Sphere 

Sphere::Sphere(double r)
    : radius(r) {
}

double Sphere::volume() const {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

//  Cone 

Cone::Cone(double r, double h)
    : radius(r), height(h) {
}

double Cone::volume() const {
    return (1.0 / 3.0) * PI * radius * radius * height;
}