#include <iostream>
#include <cmath> 
using namespace std;


void volume(int side) {
    int result = side * side * side;
    cout << "正方體體積 (邊長 " << side << "): " << result << endl;
}


void volume(int radius, int height) {
    double pi = 3.14159;
    double result = pi * pow(radius, 2) * height;
    cout << "圓柱體體積 (半徑 " << radius << ", 高 " << height << "): " << result << endl;
}


void volume(int l, int w, int h) {
    int result = l * w * h;
    cout << "長方體體積 (長 " << l << ", 寬 " << w << ", 高 " << h << "): " << result << endl;
}

int main() {

    volume(5);         
    volume(3, 10);    
    volume(2, 4, 6);   

    return 0;
}