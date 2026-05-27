#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double Volume() const = 0;
    virtual ~Shape() {}
};

class Cone : public Shape {
private:
    double radius;
    double height;

public:
    Cone(double r, double h);
    double Volume() const override;
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r);
    double Volume() const override;
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h);
    double Volume() const override;
};

#endif
