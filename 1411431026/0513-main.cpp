// Fig. 10.8: fig10_08.cpp
// Date class test program.
#include <iostream>
#include "0513-Time.h" // Date class definition
using namespace std;

int main()
{
    Time time1(8, 24, 36);
    Time time2;

    cout << "time1 is " << time1 << endl;
    cout << "time2 is " << time2 << endl;

    cout << "\ntime1 += 30 結果為: " << (time1 += 30) << endl;

    cout << "\n前置 ++ 測試" << endl;
    cout << "++time1 結果為: " << ++time1 << endl;
    cout << "time1 現在為: " << time1 << endl;

    cout << "\n後置 ++ 測試" << endl;
    cout << "time1++ 結果為: " << time1++ << endl;
    cout << "time1 現在為: " << time1 << endl;

    return 0;
}