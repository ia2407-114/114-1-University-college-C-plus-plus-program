#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "0610-Animal2.h"

using namespace std;

int main()
{
    const int NUM = 3;

    Animal animals[NUM];

    ofstream outFile("animal.txt");

    if (!outFile)
    {
        cout << "animal.txt檔案無法開啟！" << endl;
        return 1;
    }

    outFile << left
        << setw(15) << "動物"
        << setw(10) << "年齡"
        << setw(10) << "身高"
        << endl;

    cout << "請輸入三種動物資料：" << endl;
    cout << "(名稱 年齡 身高)\n" << endl;

    for (int i = 0; i < NUM; i++)
    {
        cout << "第" << i + 1 << "種動物：";
        animals[i].inputData();
        animals[i].writeData(outFile);
    }

    outFile.close();

  
    fstream file(
        "animal.txt",
        ios::in | ios::out | ios::app);

    if (!file)
    {
        cout << "檔案開啟失敗！" << endl;
        return 1;
    }

    file.close();

    ifstream inFile("animal.txt");

    string header;
    getline(inFile, header);

    string name;
    int age;
    int height;

    float totalAge = 0;
    float totalHeight = 0;
    int count = 0;

    while (inFile >> name >> age >> height)
    {
        totalAge += age;
        totalHeight += height;
        count++;
    }

    inFile.close();

    float avgAge = totalAge / count;
    float avgHeight = totalHeight / count;

 
    ofstream appendFile(
        "animal.txt",
        ios::app);

    appendFile << endl;

    appendFile << fixed << setprecision(1);

    appendFile << "平均年齡："
        << avgAge
        << "\t平均身高："
        << avgHeight
        << endl;

    appendFile.close();


    ifstream displayFile("animal.txt");

    if (!displayFile)
    {
        cout << "檔案讀取失敗！" << endl;
        return 1;
    }

    displayFile.close();
    return 0;
}