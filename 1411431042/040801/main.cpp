#include <iostream>
#include "GregorianDate.h"
#include "ChineseRepublicDate.h"

int main() {
    int y, m, d;

    std::cout << "請輸入西元年份：";
    std::cin >> y;
    std::cout << "請輸入月份：";
    std::cin >> m;
    std::cout << "請輸入日期：";
    std::cin >> d;

    // 使用抽象指標，實現多型
    Date* gDate = new GregorianDate(y, m, d);
    Date* rDate = new ChineseRepublicDate(y, m, d);

    if (!gDate->isValid()) {
        std::cout << "錯誤：輸入的日期無效（例如 2017/03/32 不存在）" << std::endl;
    }
    else {
        std::cout << "\n=== 日期輸出 ===" << std::endl;
        gDate->print();   // 西元格式
        rDate->print();   // 民國格式
    }

    delete gDate;
    delete rDate;
    return 0;
}