#include <iostream>
using namespace std;

int volume(int x)
{
	cout << "square volume " << "x=" << x << " is ";
	return x * x * x;
}

double volume(int r, int h)
{
	cout << "circle volume " <<"r=" << r <<   "h=" << h<< " is ";
	return r*r*h*3.14 ;
}

int volume(int a, int b, int c)
{
	cout << "rect volume " << "a=" << a << "b=" << b << "c="<< c <<" is ";
	return a * b * c;
}

int main()
{	
	int x,r,h,a,b,c;

	cout << "enter one integer" << endl;
	cin >> x  ;
	cout << volume(x) << endl;

	cout << "enter two integer " << endl;
	cin >>r >> h;
	cout << volume(r,h) << endl;

	cout << "enter integer one to three" << endl;
	cin >> a >> b >> c;
	cout << volume(a,b,c) << endl;
}