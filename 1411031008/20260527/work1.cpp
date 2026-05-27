#include <iostream>
#include "Shape.h"

using namespace std;

int main() {

    Shape* a1;

    Cron c(5, 3);
    Ball b(4);
    Cylinder cy(5, 4);

    a1 = &c;
    cout << "Cone Volume: " << a1->Volume() << endl;

    a1 = &b;
    cout << "Ball Volume: " << a1->Volume() << endl;

    a1 = &cy;
    cout << "Cylinder Volume: " << a1->Volume() << endl;

    return 0;
}