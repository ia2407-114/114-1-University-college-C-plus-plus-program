// Fig. 10.8: fig10_08.cpp
// Time class test program.
#include <iostream>
#include "Time.h" // Time class definition
using namespace std;

int main()
{
	Time time1(8, 24, 36);

	cout << "time1 is " << time1 << endl;
	cout << "\nTesting prefix increment:\n";
	cout << "++time1 is " << ++time1 << endl;
	cout << "time1 is " << time1 << endl;

	cout << "\nTesting postfix increment:\n";
	cout << "time1++ is " << time1++ << endl;
	cout << "time1 is " << time1 << endl;
	
	cout << "\nAdding 30 seconds:\n";
	cout << "time1 += 30 is " << (time1 += 30) << endl;

	return 0;
} // end main
