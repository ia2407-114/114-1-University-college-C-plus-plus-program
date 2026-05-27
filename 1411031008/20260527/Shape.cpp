#include "Shape.h"

Cron::Cron(double r, double h)
    : radius(r), height(h) {}

double Cron::Volume() const {
    return 3.14159 * radius * radius * height * (1.0 / 3);
}

Ball::Ball(double r)
    : radius(r) {}

double Ball::Volume() const {
    return (4.0 / 3) * 3.14159 * radius * radius * radius;
}

Cylinder::Cylinder(double r, double h)
    : radius(r), height(h) {}

double Cylinder::Volume() const {
    return 3.14159 * radius * radius * height;
}