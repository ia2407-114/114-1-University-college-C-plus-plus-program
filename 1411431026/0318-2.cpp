#include <iostream>
using namespace std;

#include "volume.h" // include definition of function template maximum

int main()
{
    // demonstrate maximum with int values
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "Integer ";
    cout << volume(int1, int2, int3) << endl;

    
    float float1, float2, float3;
    cout << "\n\nInput three float values: ";
    cin >> float1 >> float2 >> float3;

    cout << "Float ";
    cout << volume(float1, float2, float3) << endl;


    double double1, double2, double3;

    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "Double ";
    cout << volume(double1, double2, double3) << endl;
   
}