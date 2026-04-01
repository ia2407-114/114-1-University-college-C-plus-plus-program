#include "Header.h" 
#include <iostream>
using namespace std;

int main()
{
    Pet mycat("大大", 3);
    Pet mydog("小小", 5);

    cout << "--- 寵物資訊 ---" << endl;
    mycat.displayPetInfo();
    cout << endl;
    mydog.displayPetInfo();
    cout << endl;


    return 0;
}