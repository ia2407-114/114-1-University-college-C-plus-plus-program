#include "Shapes.h"


const double PI = 3.14159265358979323846;


Cone::Cone(double r, double h) : radius(r), height(h) {}
double Cone::Volume() const {
    return (1.0 / 3.0) * PI * radius * radius * height;
}


Ball::Ball(double r) : radius(r) {}
double Ball::Volume() const {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}


Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}
double Cylinder::Volume() const {
    return PI * radius * radius * height;
}
