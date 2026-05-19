// Fig. 10.8: fig10_08.cpp
// Time class test program.
#include <iostream>
#include "Time.h" // Time class definition
using namespace std;

int main()
{
    Time t3(6, 7, 57);

    cout << "Initial time: " << t3 << endl;
    cout << "postfix" << endl;
    cout << "t3++ is " << t3++ << endl;
    cout << "Now t3 is " << t3 << endl;

    cout << "\nNEXT:\nprefix\n";
    cout << "++t3 is " << ++t3 << endl;
    cout << "Now t3 is " << t3 << endl;

    cout << "\n\nt3 += 7 is " << (t3 += 7);


} // end main

//題目1. 請根據上述"運算子多載的範例程式碼.zip"
//修改為相對應的時間格式的運算子多載，例如: time1(8,24,36), time1++ 結果為: 8:24:36