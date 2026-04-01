#include <iostream>
#include "pet.h"
using namespace std;

// 建構子
Pet::Pet(string name, int age)
{
    setPetName(name);
    setPetAge(age);
}

// 解構子
Pet::~Pet()
{
    cout << "Goodbye my pet " << PetName << " !" << endl;
}

// 設定名字
void Pet::setPetName(string name)
{
    if (name.length() > 2 && name.length() < 6)
        PetName = name;
    else
    {
        cout << "Name error!\n";
        PetName = "kevin";
    }
}

// 設定年齡
void Pet::setPetAge(int age)
{
    if (age >= 0 && age <= 20)
        PetAge = age;
    else
    {
        cout << "Age error!\n";
        PetAge = 1;
    }
}

// 取得名字
string Pet::getPetName() const
{
    return PetName;
}

// 取得年齡
int Pet::getPetAge() const
{
    return PetAge;
}

// 顯示訊息
void Pet::displayMessage() const
{
    cout << "My name is " << PetName<< " and " << PetAge << " years old" << endl;
}