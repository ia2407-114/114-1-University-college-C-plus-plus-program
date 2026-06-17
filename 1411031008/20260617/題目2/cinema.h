#ifndef CINEMA_H
#define CINEMA_H

#include <iostream>
#include <fstream>
using namespace std;


struct cinema
{
    char name[20];
    char date[10];
    char place[20];
    int price;
};


void writeMovie();
void showMovieList();
void showMovieDetail(int no);

#endif