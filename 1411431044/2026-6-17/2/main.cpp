#pragma once
#include <iostream>
#include "cinema.h"
using namespace std;

int main() {
    CinemaManager manager;
    const char* filename = "movie.bin";

    manager.saveData(filename, 5);

    manager.displayTitles(filename);

    int no;
    cout << "\n請輸入要查詢的電影編號: ";
    cin >> no;
    manager.displayFullData(filename, no);

    return 0;
}