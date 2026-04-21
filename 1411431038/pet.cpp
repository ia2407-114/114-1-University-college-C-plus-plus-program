#include <iostream>
#include "PET.h"  
#include "Date.h" 
using namespace std;

// 建構子
PET::PET(const string& petName, const string& petCategory,
    const Date& birthday, const Date& adopt)
    : name(petName),
    category(petCategory),
    birthDate(birthday),
    adoptDate(adopt)
{
}

// 檢查生日格式 (月份 1~12，日期 1~31)
bool PET::check_birth() const
{
    int m = birthDate.getMonth();
    int d = birthDate.getDay();
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > 31) return false;
    return true;
}

// 檢查領養日格式，且領養日不能早於生日
bool PET::check_adopt() const
{
    int am = adoptDate.getMonth(), ad = adoptDate.getDay(), ay = adoptDate.getYear();
    int bm = birthDate.getMonth(), bd = birthDate.getDay(), by = birthDate.getYear();

    // 1. 先檢查領養日本身格式是否正確
    if (am < 1 || am > 12 || ad < 1 || ad > 31) return false;

    // 2. 檢查是否早於生日
    if (ay < by) return false;
    if (ay == by && am < bm) return false;
    if (ay == by && am == bm && ad < bd) return false;

    return true;
}

// 印出詳細資料
void PET::print_all_data() const
{
    cout << "\n===============================" << endl;
    cout << "名字: " << name << " | 品種: " << category << endl;

    cout << "[生  日] ";
    birthDate.printUniversal();
    cout << " (";
    birthDate.printStandard();
    cout << ")" << endl;

    cout << "[領養日] ";
    adoptDate.printUniversal();
    cout << " (";
    adoptDate.printStandard();
    cout << ")" << endl;
    cout << "===============================\n" << endl;
}

// 解構子印出 Bye Bye~~
PET::~PET()
{
    cout << name << " : Bye Bye~~" << endl;
}