#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template <typename T>
void volume(T x, T y, T z)
{
    cout << "Volume is: " << x * y * z << endl;
}

int main()
{
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The volume integer value is: ";
    volume(int1, int2, int3);

    float float1, float2, float3;

    cout << "\n\nInput three characters: ";
    cin >> float1 >> float2 >> float3;

    cout << "The volume character value is: ";
    volume(float1, float2, float3);

    double double1, double2, double3;

    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The volume double value is: ";
    volume(double1, double2, double3);
    cout <<  endl;
}