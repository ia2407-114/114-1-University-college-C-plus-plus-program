#include <iostream>
using namespace std;

int volume(int x)
{
    cout << "Cube volume: ";
    return x * x * x;
}

double volume(int r, int h)
{
    cout << "Cylinder volume: ";
    return 3.14159 * r * r * h;
}

int volume(int x, int y, int z)
{
    cout << "Rectangular prism volume: ";
    return x * y * z;
}

int main()
{
    cout << volume(7);        
    cout << endl;

    cout << volume(5, 6);     
    cout << endl;

    cout << volume(5, 6, 7);  
    cout << endl;

    return 0;
}