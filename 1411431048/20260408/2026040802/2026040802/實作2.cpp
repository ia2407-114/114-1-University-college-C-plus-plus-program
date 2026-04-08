#include <iostream>
#include "標頭2.h"
using namespace std;

DogBase::DogBase(string n, int by_, int bm_, int bd_,
    int ay_, int am_, int ad_) {

    name = n;

    if (checkDate(by_, bm_, bd_) && checkDate(ay_, am_, ad_) &&
        checkAge(by_, bm_, bd_)) {

        by = by_; bm = bm_; bd = bd_;
        ay = ay_; am = am_; ad = ad_;
    }
    else {
        cout << "資料錯誤\n";
    }
}

bool DogBase::checkDate(int y, int m, int d) {
    if (m < 1 || m>12) return false;

    int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return d >= 1 && d <= day[m - 1];
}

bool DogBase::checkAge(int by, int bm, int bd) {
    int age = 2026 - by;
    return age >= 0 && age <= 20;
}

Dog::Dog(string n, int by, int bm, int bd,
    int ay, int am, int ad)
    : DogBase(n, by, bm, bd, ay, am, ad) {
}

void Dog::show() {
    cout << name << endl;
    cout << "生日: " << by << "/" << bm << "/" << bd << endl;
    cout << "領養: " << ay << "/" << am << "/" << ad << endl;
}