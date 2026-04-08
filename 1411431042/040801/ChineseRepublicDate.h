#ifndef CHINESE_REPUBLIC_DATE_H
#define CHINESE_REPUBLIC_DATE_H

#include "Date.h"

class ChineseRepublicDate : public Date {
public:
    ChineseRepublicDate(int y = 1990, int m = 1, int d = 1);

    // 實作抽象方法
    void print() const override;
};

#endif#pragma once
