#include "geometry.h"
#include <iostream>

using namespace std; // 在 .cpp 檔內使用，避免污染標頭檔

// --- shape 類別實作 ---
shape::shape() {
    name = "長方體";
}

void shape::area() {
    cout << "\n圖形名稱: " << name << endl;
    cout << "長方體體積為: " << shape_area << " 立方單位" << endl;
}

// --- rectangle 類別實作 ---
void rectangle::data_input() {
    cout << "實作一個長方體物件:" << endl;
    cout << "請輸入長度: ";
    cin >> length;
    cout << "請輸入寬度: ";
    cin >> width;
}

// --- cube 類別實作 ---
void cube::data_input() {
    // 呼叫父類別（rectangle）的 data_input 函式來輸入長與寬
    rectangle::data_input();

    cout << "請輸入高度: ";
    cin >> height;

    // 計算體積，並存入最上層 shape 的屬性中
    shape_area = length * width * height;
}