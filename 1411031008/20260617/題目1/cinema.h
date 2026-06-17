#ifndef CINEMA_H
#define CINEMA_H

#include <iostream>
#include <fstream>
using namespace std;


struct cinema
{
    char name[10];
    char date[9];
    char place[7];
    int price;
};


void writeMovie();
void readMovie();

#endif
