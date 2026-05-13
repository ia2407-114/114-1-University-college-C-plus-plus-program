#include <iostream>
#include "date timedate.h" // Date class definition
using namespace std;

int main() {
    Time t1(23, 59, 57);
    Time t2; // 預設 00:00:00

    cout << "初始時間 t1: " << t1 << endl;
    cout << "初始時間 t2: " << t2 << endl;

    cout << "\n測試 t1 += 5 秒:" << endl;
    t1 += 5;
    cout << "結果: " << t1 << " (跨日測試成功)" << endl;

    cout << "\n測試前置 ++t2:" << endl;
    cout << "++t2 顯示: " << ++t2 << endl;
    cout << "t2 現在是: " << t2 << endl;

    cout << "\n測試後置 t2++:" << endl;
    cout << "t2++ 顯示: " << t2++ << " (應該顯示舊值)" << endl;
    cout << "t2 現在是: " << t2 << " (顯示新值)" << endl;

    return 0;
}