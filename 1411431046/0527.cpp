#include "0527.h"
Cone::Cone(double r, double h)
{
    radius = r;
    height = h;
}

double Cone::Volume() const
{
    return (3.14159 * radius * radius * height) / 3;
}

Sphere::Sphere(double r)
{
    radius = r;
}

double Sphere::Volume() const
{
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

Cylinder::Cylinder(double r, double h)
{
    radius = r;
    height = h;
}

double Cylinder::Volume() const
{
    return 3.14159 * radius * radius * height;
}