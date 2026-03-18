#include <iostream>
using namespace std;


int volume(int x)
{
    cout << "cube volume " << x << " is ";
    return x * x * x;
}


double volume(int r, int h)
{
    cout << "cylinder volume (r=" << r << ", h=" << h << ") is ";
    return 3.14159 * r * r * h;
}


int volume(int x, int y, int z)
{
    cout << "rect volume " << x << ", " << y << ", " << z << " is ";
    return x * y * z;
}

int main()
{
    cout << volume(4) << endl;        
    cout << volume(3, 5) << endl;     
    cout << volume(2, 3, 4) << endl;  

    return 0;
}