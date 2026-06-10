#include "AnimalManager.h" 
#include <iostream>        
#include <fstream>         
#include <string>          
#include <cstdlib>         

using namespace std;

AnimalManager::AnimalManager(const string& fileName) : m_fileName(fileName) {}

void AnimalManager::writeAnimalData(int count)
{
    ofstream writefile;
    writefile.open(m_fileName, ios_base::out);
    if (writefile.fail())
    {
        cout << m_fileName << "檔案無法開啟!\n";
        exit(1);
    }
    writefile << "動物\t年齡\t身高\n";
    int i;
    string name;
    int age, height;
    for (i = 1; i <= count; i++)
    {
        cout << "輸入第" << i << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";
        cin >> name >> age >> height;
        writefile << name << '\t' << age << '\t' << height << '\n';
        if (writefile.fail())
        {
            cout << "寫入失敗\n";
            break;
        }
    }
    writefile.close();
}

void AnimalManager::readAndDisplayData()
{
    ifstream readfile;
    string data;
    readfile.open(m_fileName, ios::in);
    if (readfile.fail())
    {
        cout << m_fileName << "檔案無法開啟!\n";
        exit(1);
    }
    cout << "\n" << m_fileName << "文字檔內容為:\n";
    while (!readfile.eof())
    {
        getline(readfile, data);
        cout << data;
        if (!readfile.eof())
            cout << '\n';
    }
    readfile.clear();
    readfile.close();
}

void AnimalManager::calculateAndAppendAverage()
{
    ifstream readfile;
    readfile.open(m_fileName, ios::in);
    if (readfile.fail())
    {
        cout << m_fileName << "檔案無法開啟!\n";
        exit(1);
    }

    string name;
    int age, height;
    getline(readfile, name); 

    float total_age = 0, total_height = 0;
    int count = 0;

    for (int i = 1; i <= 3; i++)
    {
        readfile >> name >> age >> height;
        if (readfile.fail()) break;
        total_age += age;
        total_height += height;
        count++;
    }
    readfile.close();

    if (count == 0) return;

    float avg_age = total_age / count;
    float avg_height = total_height / count;

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << "\n平均年齡:" << avg_age << "\t平均身高:" << avg_height << '\n';

    ofstream writefile;
    writefile.open(m_fileName, ios::app);
    if (writefile.fail()) exit(1);

    writefile << "平均年齡:" << avg_age << "\t平均身高:" << avg_height << '\n';
    writefile.close();
}
