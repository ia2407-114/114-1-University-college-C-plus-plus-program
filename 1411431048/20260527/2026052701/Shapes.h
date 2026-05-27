#pragma once


class Shape {
public:
    virtual ~Shape() {} 
    virtual double Volume() const = 0;
};


class Cone : public Shape {
private:
    double radius;
    double height;
public:
    Cone(double r, double h);
    double Volume() const override;
};


class Ball : public Shape {
private:
    double radius;
public:
    Ball(double r);
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



