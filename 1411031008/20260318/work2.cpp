// Fig. 15.13: fig15_13.cpp
// Function template ¨ç¦¡ªº¼ËªO
#include <iostream>
using namespace std;

#include "volume.h" 

int main()
{
    // demonstrate volume with int values
    int a, b, c;

    cout << "Input three integer values: ";
    cin >> a >> b >> c;

    // invoke int version of volume
    cout << "Integer cube volumes: "
        << volume(a) << " "
        << volume(b) << " "
        << volume(c);
    cout << endl;

    float d, e, f;
   
    cout << "\n\nInput three float values: ";
    cin >> d >> e >> f;

    // invoke float version of volume
    cout << "Float cube volumes: "
        << volume(d) << " "
        << volume(e) << " "
        << volume(f);
    cout << endl;


    double x, y, z;

    cout << "\n\nInput three double values: ";
    cin >> x >> y >> z;

    // invoke double version of volume
    cout << "Double cube volumes: "
        << volume(x) << " "
        << volume(y) << " "
        << volume(z);
    cout << endl;
}
