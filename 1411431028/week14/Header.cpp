#include <iostream>
#include <cmath> 
using namespace std;


const double PI = 3.1415926;

class Shape {
public:
    virtual double Volume() const = 0;
    virtual ~Shape() {}
};

class Cone : public Shape {
    double r, h;
public:
    Cone(double r, double h) : r(r), h(h) {}
    double Volume() const override {

        return (1.0 / 3.0) * PI * pow(r, 2) * h;
    }
};

class Sphere : public Shape {
    double r;
public:
    Sphere(double r) : r(r) {}
    double Volume() const override {
        return (4.0 / 3.0) * PI * pow(r, 3);
    }
};

class Cylinder : public Shape {
    double r, h;
public:
    Cylinder(double r, double h) : r(r), h(h) {}
    double Volume() const override {
        return PI * pow(r, 2) * h;
    }
};
