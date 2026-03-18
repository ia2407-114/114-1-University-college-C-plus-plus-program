#include <iostream>
using namespace std;

int volume(int x)
{
    cout << "正方體 volume (" << x << ") = ";
    return x * x * x;
}


double volume(int r, int h)
{
    cout << "圓柱體 volume (" << r << ", " << h << ") = ";
    return 3.14 * r * r * h;
}


int volume(int l, int w, int h)
{
    cout << "長方體 volume (" << l << "," << w << "," << h << ") = ";
    return l * w * h;
}

int main()
{
    cout << volume(7) << endl;        
    cout << volume(3, 5) << endl;     
    cout << volume(2, 4, 6) << endl; 

    return 0;
}
