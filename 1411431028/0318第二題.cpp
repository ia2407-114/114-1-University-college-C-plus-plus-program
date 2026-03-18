
#include <iostream>
using namespace std;


#include "maximum.h" 

int main()
{
	
	int i1, i2, i3;
	cout << "1. Input three integer values: ";
	cin >> i1 >> i2 >> i3;
	
	cout << "The volume (int) is: " << maximum(i1, i2, i3) << endl;

	
	float f1, f2, f3;
	cout << "\n2. Input three float values: ";
	cin >> f1 >> f2 >> f3;
	
	cout << "The volume (float) is: " << maximum(f1, f2, f3) << endl;

	
	double d1, d2, d3;
	cout << "\n3. Input three double values: ";
	cin >> d1 >> d2 >> d3;
	
	cout << "The volume (double) is: " << maximum(d1, d2, d3) << endl;

	return 0;
}