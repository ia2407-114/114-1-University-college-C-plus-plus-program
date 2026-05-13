#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1(23, 59, 58);
    Time t2(8, 24, 36);

    cout << "Initial t1: " << t1 << endl;
    cout << "Initial t2: " << t2 << endl;

    
    cout << "\nTesting prefix increment on t1:" << endl;
    cout << "++t1 is " << ++t1 << endl;
    cout << "++t1 is " << ++t1 << " (should wrap to 00:00:00)" << endl;

    
    cout << "\nTesting postfix increment on t2:" << endl;
    cout << "t2++ is " << t2++ << " (original value)" << endl;
    cout << "Now t2 is " << t2 << " (after increment)" << endl;

    
    Time t3(10, 30, 0);
    cout << "\nt3 is " << t3 << endl;
    cout << "t3 += 70 is " << (t3 += 70) << " (added 70 seconds)" << endl;

    return 0;
}