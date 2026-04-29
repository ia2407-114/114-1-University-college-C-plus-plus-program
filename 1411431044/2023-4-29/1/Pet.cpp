#include <iostream>
#include "PET.h"
using namespace std;

PET::PET(const string& first, const string& last, const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), category(last), birthDate(dateOfBirth), adoptDate(dateOfHire) {
    cout << "PET 物件建構中: " << firstName << endl;
}

void PET::print() const {
    cout << category << ", " << firstName << endl;
}

PET::~PET() { cout << "PET 物件解構完成" << endl; }

// 【核心實作】獨立的 friend 函數
void printDate(const PET& p) {
    cout << "\n=== 透過 Friend Function 印出日期 ===" << endl;
    cout << p.firstName << " (" << p.category << ")" << endl;

    cout << "生日：";
    p.birthDate.printStandard(); // 存取私有成員 birthDate

    cout << "\n領養日：";
    p.adoptDate.printStandard(); // 存取私有成員 adoptDate
    cout << "\n====================================\n" << endl;
}