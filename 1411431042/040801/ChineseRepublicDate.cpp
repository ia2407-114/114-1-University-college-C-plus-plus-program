#include "ChineseRepublicDate.h"
#include <iostream>
#include <iomanip>

ChineseRepublicDate::ChineseRepublicDate(int y, int m, int d)
    : Date(y, m, d) {
}

void ChineseRepublicDate::print() const {
    int rocYear = year - 1911;  // 西元轉民國
    std::cout << "民國："
        << rocYear << "年"
        << std::setw(2) << std::setfill('0') << month << "月"
        << std::setw(2) << std::setfill('0') << day << "日"
        << std::endl;
}