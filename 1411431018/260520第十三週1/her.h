#pragma once
#include <string>
using namespace std;

class shape
{
protected:

    string name="";
    double shape_area=0.0;

public:

    void area();
    void display();
};

class rectangle :public shape
{
protected:
    double length=0.0;
    double width=0.0;

public:
    void data_input();
    void display();
};

class cube :public rectangle
{
protected:
    double height=0.0;

public:
    void data_input();
    void display();
};