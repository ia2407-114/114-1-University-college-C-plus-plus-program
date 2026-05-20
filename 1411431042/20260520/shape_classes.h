#ifndef SHAPE_CLASSES_H
#define SHAPE_CLASSES_H

#include <iostream>
#include <string>
using namespace std;


class shape
{
protected:
    string name;
    float shape_area;

public:
    void area();
};


class rectangle : public shape
{
protected:
    float length;
    float width;
    float base_area;

public:
    void data_input();
    void show_base_area();
};


class cube : public rectangle
{
private:
    float height;

public:
    void data_input();
};

#endif