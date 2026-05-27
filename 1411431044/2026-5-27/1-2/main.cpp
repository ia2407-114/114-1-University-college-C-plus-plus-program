#include <iostream>
#include "Shape.h"
using namespace std;

int main() {
    Cone cone(4, 5);
    Sphere sphere(6);
    Cylinder cylinder(7, 8);

    Shape* a1 = nullptr;

    a1 = &cone;
    cout << "圓錐體體積: " << a1->Volume() << endl;

    a1 = &sphere;
    cout << "球體體積:   " << a1->Volume() << endl;

    a1 = &cylinder;
    cout << "圓柱體體積: " << a1->Volume() << endl;

    return 0;
}