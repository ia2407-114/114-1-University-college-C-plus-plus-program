#include <iostream>
#include "shape_classes.h" 
using namespace std;


void shape::area() {
    cout << name << "的體積為: " << shape_area << endl;
}

void rectangle::data_input() {
    name = "長方體";
    cout << "請輸入長: ";
    cin >> length;
    cout << "請輸入寬: ";
    cin >> width;
}


void cube::data_input() {
    rectangle::data_input(); 

    cout << "請輸入高: ";
    cin >> height;           

    shape_area = length * width * height; 
}