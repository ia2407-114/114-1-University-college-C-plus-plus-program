#include <iostream>
using namespace std;

class Shape {
public:
    virtual double Volume() const = 0;
    virtual ~Shape(){}
};

class Cone : public Shape {
private:
    double radius;
    double height;

public:
    Cone(double r,double h) : radius(r) ,height(h) {}

    double Volume() const override {
        return (1.0 / 3.0) * 3.1415926535 * radius * radius * height;
    }
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double Volume() const override {
        return (4.0 / 3.0) * 3.1415926535 * radius * radius * radius;
    }
};

class Cylinder : public Shape {
private:
    double radius; 
    double height;
public:
    Cylinder(double r,double h) : radius(r),height(h) {}

    double Volume() const override {
        return 3.1415926535 * radius * radius * height;
    }
};

int main() {
    Cone cone(3,5);
    Sphere sphere(4);
    Cylinder cylinder(4, 6);
    Shape* a1 = nullptr;

    a1 = &cone;
    cout << "¶êÀ@Åé:" << a1->Volume() << endl;
    a1 = &sphere;
    cout << "¶êÅé:" << a1->Volume() << endl;
    a1 = &cylinder;
    cout << "¶ê¬WÅé:" << a1->Volume() << endl;
    return 0;
}