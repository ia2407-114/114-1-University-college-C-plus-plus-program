#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

const double PI = 3.14159;

int volume(int x) {
    cout << "cube volume: ";
    return x * x * x;
}


double volume(int r, int h) {
    cout << "cylinder volume: ";
    return PI * r * r * h;
}


int volume(int x, int y, int z) {
    cout << "rect volume: ";
    return x * y * z;
}

int main() {
    string input;
    cout << "請直接輸入 1~3 個整數 : ";
    getline(cin, input); 

    stringstream ss(input);
    int n, nums[3], count = 0;


    while (ss >> n && count < 3) {
        nums[count++] = n;
    }

   
    if (count == 1) {
        cout << volume(nums[0]) << endl;
    }
    else if (count == 2) {
        cout << volume(nums[0], nums[1]) << endl;
    }
    else if (count == 3) {
        cout << volume(nums[0], nums[1], nums[2]) << endl;
    }
    else {
        cout << "請輸入正確數量的參數。" << endl;
    }

    return 0;
}