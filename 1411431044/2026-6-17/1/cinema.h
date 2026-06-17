#pragma once
#ifndef CINEMA_H
#define CINEMA_H

struct cinema {
    char name[10];
    char date[9];
    char place[7];
    int price;
};

void writeData();
void readData();

#endif