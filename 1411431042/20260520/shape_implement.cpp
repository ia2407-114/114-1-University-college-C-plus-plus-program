#include "shape_classes.h"


void shape::area()
{
    cout << "長方體體積:" << shape_area << endl;
}


void rectangle::data_input()
{
    name = "長方體";

    cout << "請輸入長: ";
    cin >> length;

    cout << "請輸入寬: ";
    cin >> width;

    base_area = length * width;
}

void rectangle::show_base_area()
{
    cout << "\n底面積: " << base_area << endl;
}


void cube::data_input()
{
    rectangle::data_input();

    cout << "請輸入高: ";
    cin >> height;

    shape_area = base_area * height;
}