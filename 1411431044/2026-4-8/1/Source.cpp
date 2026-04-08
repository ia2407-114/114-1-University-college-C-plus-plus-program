#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main() {
    int y, m, d;
    cout << "請輸入西元 年 月 日 (空格區隔): ";
    cin >> y >> m >> d;

    try {
        Date userDate(y, m, d);
        userDate.printWestern();
        userDate.printRepublic();
    }
    catch (invalid_argument& e) {
        cout << "錯誤原因: " << e.what() << endl;
    }

    return 0;
}