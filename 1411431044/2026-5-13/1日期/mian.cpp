#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    Time t1(8, 16, 24);
    Time t2;
    Time t3(12, 30, 0);

 
    cout << "TIME1 is " << t1 << endl;
    cout << "Testing t1++ (postfix): " << t1++ << endl;
    cout << "Now t1 is " << t1 << endl;               
    t2.setTime(23, 59, 58);
    cout << "\nModified t2 is " << t2 << endl;
    cout << "++t2 is " << ++t2 << endl;
    cout << "++t2 is " << ++t2 << " (New Day!)" << endl;

    cout << "\nTesting prefix (++t3):\n" << "t3 is " << t3 << endl;
    cout << "++t3 is " << ++t3 << endl;

    return 0;
}