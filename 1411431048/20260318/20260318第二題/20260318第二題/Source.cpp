#include <iostream>
using namespace std;

#include "volume.h"

int main()
{
    
    int int1, int2, int3;
    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The integer volume is: "
        << volume(int1, int2, int3);

    
    float f1, f2, f3;
    cout << "\n\nInput three float values: ";
    cin >> f1 >> f2 >> f3;

    cout << "The float volume is: "
        << volume(f1, f2, f3);

    
    double d1, d2, d3;
    cout << "\n\nInput three double values: ";
    cin >> d1 >> d2 >> d3;

    cout << "The double volume is: "
        << volume(d1, d2, d3) << endl;

    return 0;
}