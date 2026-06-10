#include "AnimalManager.h" 
#include <iostream>
#include <fstream>
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
    if (writefile.fail())
    {
        cout << m_fileName << "檔案無法關閉!\n";
        exit(1);
    }
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
    cout << m_fileName << "文字檔內容為:\n";
    while (!readfile.eof())
    {
        getline(readfile, data);
        cout << data;
        if (!readfile.eof())
            cout << '\n';
    }
    readfile.clear();
    readfile.close();
    if (readfile.fail())
    {
        cout << m_fileName << "檔案無法關閉!\n";
        exit(1);
    }
} 
