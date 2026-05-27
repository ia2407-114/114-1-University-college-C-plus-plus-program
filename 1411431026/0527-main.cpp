#include <iostream>
#include "0527-shape.h"

using namespace std;

int main() {
    Shape* a1;

    Cron c(5, 3);
    Ball b(4);
    Cylinder cy(5, 4);

    a1 = &c;
    cout << a1->Volume() << endl;

    a1 = &b;
    cout << a1->Volume() << endl;

    a1 = &cy;
    cout << a1->Volume() << endl;

    return 0;
}