#include "fly.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    bombplane bomb1;
    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();

    bomb1.display(cout);

    ofstream outFile("bomb.txt");

    if (!outFile) {
        cerr << "無法開啟檔案進行寫入！" << endl;
        return 1;
    }

    bomb1.display(outFile);

    outFile.close();

    cout << "\n資料已成功存入 bomb.txt 檔案中！" << endl;

    return 0;
}
