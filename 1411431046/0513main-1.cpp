#include <iostream>
#include "0513-1.h"
using namespace std;

int main()
{
    Time t1(8, 24, 36); // 8:24:36
    Time t2;            // 預設 00:00:00

    cout << "t1 is " << t1 << "\nt2 is " << t2;

    // += 測試
    cout << "\n\nt1 += 7 seconds is " << (t1 += 7);

    // 前置 ++
    t2.setTime(23, 59, 58);
    cout << "\n\n t2 is " << t2;
    cout << "\n++t2 is " << ++t2;
    cout << "\n++t2 is " << ++t2 << " (跨日)";

    
    Time t3(12, 59, 59);

    cout << "\n\nTesting the prefix increment operator:\n"
        << "  t3 is " << t3 << endl;
    cout << "++t3 is " << ++t3 << endl;
    cout << "  t3 is " << t3;

    cout << "\n\nTesting the postfix increment operator:\n"
        << "  t3 is " << t3 << endl;
    cout << "t3++ is " << t3++ << endl;
    cout << "  t3 is " << t3 << endl;

    return 0;
}