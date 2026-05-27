#ifndef VOLUME_H
#define VOLUME_H

class Volume {
public:
   
    virtual double volume() const = 0;

   
    virtual ~Volume() {}
};


class Cylinder : public Volume {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h);

    double volume() const override;
};


class Sphere : public Volume {
private:
    double radius;

public:
    Sphere(double r);

    double volume() const override;
};


class Cone : public Volume {
private:
    double radius;
    double height;

public:
    Cone(double r, double h);

    double volume() const override;
};

#endif