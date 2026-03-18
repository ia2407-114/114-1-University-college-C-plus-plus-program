#include <iostream>
using namespace std;
#include "maximum.h"


int main()
{
   
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The cube volume (int) is: "
        << volume(int1, int2, int3);

    
    float float1, float2, float3;

    cout << "\n\nInput three float values: ";
    cin >> float1 >> float2 >> float3;

    cout << "The cube volume (float) is: "
        << volume(float1, float2, float3);

    
    double double1, double2, double3;

    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The cube volume (double) is: "
        << volume(double1, double2, double3) << endl;

    return 0;
}