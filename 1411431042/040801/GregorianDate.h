#ifndef GREGORIAN_DATE_H
#define GREGORIAN_DATE_H

#include "Date.h"

class GregorianDate : public Date {
public:
    GregorianDate(int y = 1990, int m = 1, int d = 1);

    // 實作抽象方法
    void print() const override;
};

#endif#pragma once
