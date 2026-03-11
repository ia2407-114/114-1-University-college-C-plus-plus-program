#include <iostream>

using namespace std;


void getFactorial(int x, long long& result) {
    result = 1; 
    if (x < 0) {
        result = 0;
        return;
    }
    for (int i = 1; i <= x; i++) {
        result *= i; 
    }
}


void getPower(int a, int n, long long& result) {
    result = 1;
    for (int i = 1; i <= n; i++) {
        result *= a;
    }
}

int main() {
    int x, a, n;
    long long factResult, powResult;


    cout << "--- 階乘計算 ---" << endl;
    cout << "輸入 X 值: ";
    cin >> x;
    getFactorial(x, factResult); 
    cout << x << "! = " << factResult << endl;

    cout << "\n--- 冪次計算 ---" << endl;
    cout << "輸入底數 a: ";
    cin >> a;
    cout << "輸入冪次 n: ";
    cin >> n;
    getPower(a, n, powResult); 
    cout << a << "^" << n << " = " << powResult << endl;

    return 0;
}