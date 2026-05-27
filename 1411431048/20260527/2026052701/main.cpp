#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {
    
    Cone cone(3.0, 5.0);       
    Ball ball(5.0);            
    Cylinder cylinder(4.0, 6.0); 
    Shape* a1 = nullptr;
    a1 = &cone;
    cout << "圓錐體積: " << cone.Volume() << endl;
    a1 = &ball;
    cout << "球體體積: " << ball.Volume() << endl;
    a1 = &cylinder;
    cout << "圓柱體積: " << cylinder.Volume() << endl;

    
    

    return 0;
}
