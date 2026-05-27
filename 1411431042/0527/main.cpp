#include <iostream>
#include "volume.h"

using namespace std;

int main() {

    
    Cylinder c(3, 5);
    Sphere s(4);
    Cone co(3, 6);

    
    Volume* a1;

    
    a1 = &c;
    cout << "圓柱體體積: "
        << a1->volume() << endl;

   
    a1 = &s;
    cout << "球體體積: "
        << a1->volume() << endl;

   
    a1 = &co;
    cout << "圓錐體體積: "
        << a1->volume() << endl;

    return 0;
}