#include <string>
#include <iostream>
#include "her.h"
using namespace std;

void shape::area()
{
    cout << "實作一個圖形\n";
    cout << "名稱:";
    cin >> name;
}

void shape::display()
{
    cout << "\n圖形名稱:" << name << endl;
    cout << "面積:" << shape_area << endl;
}

void rectangle::data_input()
{
    shape::area();
    cout << "長度:";
    cin >> length;
    cout << "寬度:";
    cin >> width;

    shape_area = length * width;
}

void rectangle::display()
{
    shape::display();
    cout << "長度:" << length << endl;
    cout << "寬度:" << width << endl;
}

void cube::data_input()
{
    rectangle::data_input();
    cout << "高度:";
    cin >> height;
}

void cube::display()
{
    rectangle::display();
    cout << "高度:" << height << endl;
    cout << "體積:" << length * width * height << endl;
}