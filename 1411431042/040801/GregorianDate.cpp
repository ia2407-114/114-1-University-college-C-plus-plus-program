#include "GregorianDate.h"
#include <iostream>
#include <iomanip>

GregorianDate::GregorianDate(int y, int m, int d)
    : Date(y, m, d) {
}

void GregorianDate::print() const {
    std::cout << "¦è¤¸¡G"
        << year << "/"
        << std::setw(2) << std::setfill('0') << month << "/"
        << std::setw(2) << std::setfill('0') << day
        << std::endl;
}