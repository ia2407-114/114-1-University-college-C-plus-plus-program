#include <iostream>
using namespace std;

int volume(int x)
{
    cout << "cube volume : ";
    return x * x * x;
}

double volume(int r, int h)
{
    cout << "cylinder volume: ";
    return 3.14 * r * r * h;
}

int volume(int x, int y, int z)
{
    cout << "cuboid Volume: ";
    return x * y * z;
}

int main()
{
   
    cout << volume(7); 
    cout << endl;
    cout << volume(2, 3);
    cout << endl;
    cout << volume(2, 3, 4) ; 
    cout << endl;
}