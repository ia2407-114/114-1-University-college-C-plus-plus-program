#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class shape
{
protected:
    string name;       
    float shape_area;  

public:
    shape();    
    void area(); 
};

class rectangle : public shape
{
protected:
    float length; 
    float width; 

public:
    rectangle();      // 建構子
    void data_input(); 
};

class cube : public rectangle
{
private:
    float height; 

public:
    cube();       // 建構子
    void data_input();
};

#endif