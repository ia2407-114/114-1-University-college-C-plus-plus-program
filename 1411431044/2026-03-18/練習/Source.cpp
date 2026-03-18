#include <iostream>
#include <iomanip>
#include "maximum.h" 

using namespace std;



int main() {

    int iL, iW, iH;
    cout << "請輸入長方體的整數 [長 寬 高]: ";
    cin >> iL >> iW >> iH;
    cout << "整數體積結果: " << volume(iL, iW, iH) << endl;


    float fL, fW, fH;
    cout << "\n請輸入長方體的浮點數 [長 寬 高] (float): ";
    cin >> fL >> fW >> fH;
    cout << "浮點數體積結果: " << volume(fL, fW, fH) << endl;


    double dL, dW, dH;
    cout << "\n請輸入長方體的數值 [長 寬 高] (double): ";
    cin >> dL >> dW >> dH;
    cout << fixed << setprecision(4);
    cout << "Double 體積結果: " << volume(dL, dW, dH) << endl;

    return 0;
}