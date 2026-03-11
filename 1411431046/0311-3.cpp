#include <iostream>
using namespace std;

// 函數宣告：傳位址回傳結果
void power(int& x, int& y, double& result);
void fact(int& i, double& result);

int main()
{
    int x, i;
    double powerResult, factResult;

    cout << "Enter x = ";
    cin >> x;
    cout << "Enter i = ";
    cin >> i;

    power(x, i, powerResult);   // 計算 x^i
    fact(i, factResult);        // 計算 i!

    cout << "result: " << powerResult << ", " << factResult << endl;

    return 0;
}

// 階乘函數
void fact(int& i, double& result)
{
    result = 1.0;
    for (int j = i; j >= 1; j--) {
        result *= j;  // 累乘
    }
}

// 冪次函數
void power(int& x, int& y, double& result)
{
    result = 1.0;
    for (int k = 1; k <= y; k++) {
        result *= x;  // 累乘
    }
}