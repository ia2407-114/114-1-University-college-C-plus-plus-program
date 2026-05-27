#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double Volume() const = 0;
    virtual ~Shape() {}
};

#endif