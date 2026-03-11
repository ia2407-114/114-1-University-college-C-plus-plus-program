#include <iostream>
using namespace std;

void power(int x, int y, double& result);
void fact(int i, double& result);

int main()
{
    int x, z, i;
    double e = 1.0;
    double p, f;

    cout << "Enter x = ";
    cin >> x;

    cout << "Enter z = ";
    cin >> z;

    for (i = 1; i <= z; i++)
    {
        power(x, i, p);  
        fact(i, f);      

        e += p / f;
    }

    cout << "e^" << x << " = " << e << endl;

    return 0;
}

void fact(int i, double& result)
{
    result = 1.0;

    for (int j = i; j >= 1; j--)
    {
        result *= j;
    }
}

void power(int x, int y, double& result)
{
    result = 1.0;

    for (int k = 1; k <= y; k++)
    {
        result *= x;
    }
}