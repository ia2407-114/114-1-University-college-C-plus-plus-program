#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time time1(8, 24, 36);

    cout << "time1 is " << time1 << endl;

    cout << "time1++ is " << time1++ << endl;
    cout << "after time1++ : " << time1 << endl;

    cout << endl;

    ++time1;
    cout << "after ++time1 : " << time1 << endl;

    cout << endl;

    time1 += 30;
    cout << "time1 += 30 : " << time1 << endl;

    cout << endl;

    Time time2(23, 59, 58);

    cout << "time2 is " << time2 << endl;

    ++time2;
    cout << "++time2 : " << time2 << endl;

    ++time2;
    cout << "++time2 : " << time2 << endl;

    return 0;
}