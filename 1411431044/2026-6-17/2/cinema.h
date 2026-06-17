#ifndef CINEMA_H
#define CINEMA_H

struct Cinema {
    char name[10];
    char date[9];
    char place[7];
    int price;
};

class CinemaManager {
public:
    void saveData(const char* filename, int count);
    void displayTitles(const char* filename);
    void displayFullData(const char* filename, int no);
};

#endif#pragma once
