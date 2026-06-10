#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;
    int height;

public:
    Animal();

    void input();                 // 格式化輸入
    void writeToFile(ofstream&);  // 寫入檔案
};

#endif