// Fig. 15.10: fig15_10.cpp
// Overloaded functions.¨ç¦¡ªº¦h¸ü
#include <iostream>
using namespace std;
const double PI = 3.14159;

// function square for int values
int volume(int x)
{
	cout << "cube volume " << x << " is ";
	return x * x * x;
}

double volume(int r, int h)
{
	cout << "circle volume (" << r << "," << h << ") is ";
	return PI * r * r * h;
}

// function square for double values
double volume(int x, int y, int z)
{
	cout << "rect volume (" << x << "," << y << "," << z << ") is ";
	return x * y * z;
}

int main()
{
	cout << volume(7); // calls int version
	cout << endl;
	cout << volume(6, 7); // calls int version
	cout << endl;
	cout << volume(5, 6, 7); // calls double version
	cout << endl;
}
