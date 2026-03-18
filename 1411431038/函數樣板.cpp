#include <iostream>
using namespace std;

#include "maximum.h"

int main()
{
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The square volume is: "
        << maximum(int1, int2, int3);

    double double1, double2, double3;

    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The square volume is: "
        << maximum(double1, double2, double3);

    float float1, float2, float3;

    cout << "\n\nInput three floatvalue: ";
    cin >> float1 >> float2 >> float3;

    cout << "The square volume is: "
        << maximum(float1, float2, float3) << endl;
}