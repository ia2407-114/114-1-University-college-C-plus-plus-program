#include <iostream>
#include "shape.h"


Cone::Cone(double r, double h) : radius(r), height(h) {}

double Cone::Volume() const {
    return (1.0 / 3.0) * 3.14159 * radius * radius * height;
};


Ball::Ball(double r) : radius(r) {}

double Ball::Volume() const {
    return  (4.0 / 3.0) * 3.14159 * radius * radius * radius;
};


Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::Volume() const  {
    return 3.14159 * radius * radius * height;
};