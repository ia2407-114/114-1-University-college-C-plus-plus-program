#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void volume(int s) {
    int res = s * s * s;
    cout << "\n>>> 正方體體積: " << res << endl;
}

void volume(int r, int h) {
    double pi = 3.14159;
    double res = pi * pow(r, 2) * h;
    cout << "\n>>> 圓柱體體積: " << fixed << setprecision(2) << res << endl;
}

void volume(int l, int w, int h) {
    int res = l * w * h;
    cout << "\n>>> 長方體體積: " << res << endl;
}

int main() {
    int choice;

    cout << "------ 幾何體積計算器 ------" << endl;
    cout << "1. 正方體 / 2. 圓柱體 / 3. 長方體" << endl;
    cout << "請選擇 (1-3): ";

    cin >> choice;

    if (choice == 1) {
        int s;
        cout << "輸入邊長: ";
        cin >> s;
        volume(s);
    }
    else if (choice == 2) {
        int r, h;
        cout << "輸入半徑與高: ";
        cin >> r >> h;
        volume(r, h);
    }
    else if (choice == 3) {
        int l, w, h;
        cout << "輸入長、寬、高: ";
        cin >> l >> w >> h;
        volume(l, w, h);
    }

    return 0;
}