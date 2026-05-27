#include "0527.h"

int main()
{
    Shape* a1;
    Cone cone(3, 5);
    a1 = &cone;
    cout << "圓錐體體積 = " << a1->Volume() << endl;
    Sphere sphere(4);
    a1 = &sphere;
    cout << "球體體積 = " << a1->Volume() << endl;
    Cylinder cylinder(3, 6);
    a1 = &cylinder;
    cout << "圓柱體體積 = " << a1->Volume() << endl;

    return 0;
}