#ifndef SHAPE_CLASSES_H
#define SHAPE_CLASSES_H

#include <string>
using namespace std;


class shape {
protected:
    string name;
    double shape_area;

public:
    void area();
};


class rectangle : public shape {
protected:
    double length;
    double width;

public:
    void data_input();
};


class cube : public rectangle {
private:
    double height;

public:
    void data_input();
};

#endif
