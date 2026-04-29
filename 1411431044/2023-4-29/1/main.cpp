#include <iostream>
#include "PET.h"
#include "Date.h"
using namespace std;

// 告知編譯器友元函數的存在
void printDate(const PET& p);

int main() {
    // 定義基礎日期物件
    Date birth(2019, 7, 24);
    Date adopt(2021, 12, 21);

    // 建立三隻不同的寵物，並使用相同的日期物件進行初始化
    PET pet1("Bob", "Dog", birth, adopt);
    PET pet2("Fat", "Parrot", birth, adopt);
    PET pet3("Strong", "Parrot", birth, adopt);

    // 透過 Friend Function 分別印出它們的資料
    // 雖然生日相同，但它們是三個獨立的 PET 物件
    printDate(pet1);
    printDate(pet2);
    printDate(pet3);

    return 0; // 程式結束時，會依序觸發三隻寵物的解構子（順序通常與建構相反）
}