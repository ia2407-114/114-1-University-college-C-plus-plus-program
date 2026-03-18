#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int volume(int x)
{
	cout << "cube volume "  << " is ";
	return x * x * x;
}

int volume(int x, int y, int z)
{
	cout << "rect volume:" << " is ";
	return x * y * z;
}
int volume(int x, int y) {
	cout << "cylinder volume:"  << "is";
	return x * y;
}

int main()
{	
	int a = 0 ,b = 0 ,c = 0;
	cout << "輸入邊或高";
	cin >> a >> b >> c;

	if (a != 0 && b == 0 && c == 0) {
		cout << volume(a);
		cout << endl;
	}
	if (a != 0 && b != 0 && c == 0) {
		cout << volume(a,b);
		cout << endl;
	}
	if (a != 0 && b != 0 && c != 0) {
		cout << volume(a, b, c);
		cout << endl;
	}
		
	
}