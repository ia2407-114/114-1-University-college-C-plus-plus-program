#include <iostream>
#include "shapes.h"
using namespace std;
shape::shape() {
    name = "長方體";
    shape_area = 0.0;
}

void shape::area() {
    cout << "\n--- 顯示圖形資訊 ---" << endl;
    cout << "圖形名稱: " << name << endl;
    cout << "底面積: " << shape_area << " (平方單位)" << endl;
}


void rectangle::data_input() {
    cout << "實作一個" << name << ":" << endl;
    cout << "請輸入長度: ";
    cin >> length;
    cout << "請輸入寬度: ";
    cin >> width;

    shape_area = length * width;
}


void cube::data_input() {
    
    rectangle::data_input();

    cout << "請輸入高度: ";
    cin >> height;

    volume = length * width * height; 
}

void cube::display() {
    cout << "長方體體積: " << volume << " (立方單位)" << endl;
}
