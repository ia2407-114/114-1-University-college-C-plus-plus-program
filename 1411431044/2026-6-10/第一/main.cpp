#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Animal.h"
using namespace std;

int main() {
    ofstream outfile("animal.txt");
    outfile << "動物\t年齡\t身高\n";
    for (int i = 1; i <= 3; i++) {
        string n; int a, h;
        cout << "輸入第" << i << "種動物名稱、年齡及身高: ";
        cin >> n >> a >> h;
        Animal animal;
        animal.setData(n, a, h);
        animal.printFormatted(outfile);
    }
    outfile.close();

    ifstream infile("animal.txt");
    string header;
    getline(infile, header); 

    double sA = 0, sH = 0;
    Animal temp;
    while (temp.readData(infile)) { 
        sA += temp.getAge();
        sH += temp.getHeight();
    }
    infile.close();

    ofstream app("animal.txt", ios::app);
    app.clear(); 
    app << fixed << setprecision(1)
        << "平均年齡:" << sA / 3 << "\t平均身高:" << sH / 3 << "\n";
    app.close();

    cout << "\n--- 完整檔案內容 ---\n";
    ifstream final("animal.txt");
    string line;
    while (getline(final, line)) {
        cout << line << endl;
    }
    final.close();

    return 0;
}