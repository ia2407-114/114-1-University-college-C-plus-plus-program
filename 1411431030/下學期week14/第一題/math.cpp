#include <iostream>
#include <math.h>
using namespace std;

class Shape {
public:
    double pi = acos(-1);
    virtual double volume() = 0;
};

class Circle : public Shape {
private:
    double radius;
    double height;
public:
    Circle(double r, double h) : radius(r), height(h) {}

    double volume()  override {
        return  (1.0 / 3.0) * pi * pow(radius, 2) * height;
    }
};

class Rectangle : public Shape {
private:
    double width;
public:
    Rectangle(double w) : width(w) {}

    double volume()  override {
        return (4.0 / 3.0) * pi * pow(width, 3);
    }
};

class cylinder : public Shape {
private:
    double radius;
    double height;
public:
    cylinder(double w, double h) : radius(w), height(h) {}

    double volume()  override {
        return pi * pow(radius, 2) * height;
    }
};
