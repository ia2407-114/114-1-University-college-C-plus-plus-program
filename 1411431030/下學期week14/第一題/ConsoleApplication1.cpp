#include <iostream>
#include <math.h>
#include "math.cpp"
using namespace std;

int main() {
    Circle c(6,4);
    Rectangle r(4);
    cylinder cy(6, 7);

    Shape* a1;
    a1 = &c;
    cout << "圓錐體面積:" << a1->volume() << endl;
    a1 = &r;
    cout << "球體體積:" << a1->volume() << endl;
    a1 = &cy;
	cout << "圓柱體體積:" << a1->volume() << endl;

    return 0;
}
