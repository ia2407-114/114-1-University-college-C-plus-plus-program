#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;
class shape {
protected:
    string name;        
    double shape_area; 

public:
    shape();           
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
    double volume;      

public:
    void data_input(); 
    void display();    
};

#endif
#pragma once
