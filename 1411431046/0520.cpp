#include "0520.h"


// 建構子
shape::shape()
{
    name = "";
    shape_area = 0;
}

// 顯示面積或體積
void shape::area()
{
    cout << "\n圖形名稱：" << name << endl;
    cout << "長方體體積：" << shape_area << endl;
}


// 建構子
rectangle::rectangle()
{
    length = 0;
    width = 0;
}

void rectangle::data_input()
{
    cout << "請輸入長方體的長：";
    cin >> length;

    cout << "請輸入長方體的寬：";
    cin >> width;
}


// 建構子
cube::cube()
{
    height = 0;
}


void cube::data_input()
{
    
    rectangle::data_input();

    cout << "請輸入長方體的高：";
    cin >> height;

    
    name = "長方體";

    shape_area = length * width * height;
}