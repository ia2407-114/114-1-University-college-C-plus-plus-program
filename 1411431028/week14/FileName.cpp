#include <iostream>
#include <cmath> 
#include"Header.h"
int main() {
    Cone cone(3, 5);
    Sphere sphere(3);
    Cylinder cylinder(3, 5);

    Shape* a1;

    a1 = &cone;
    cout << "圓錐體積: " << a1->Volume() << endl;

    a1 = &sphere;
    cout << "球體體積: " << a1->Volume() << endl;

    a1 = &cylinder;
    cout << "圓柱體積: " << a1->Volume() << endl;

    return 0;
}