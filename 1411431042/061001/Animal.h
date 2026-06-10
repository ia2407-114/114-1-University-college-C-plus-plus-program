#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Animal
{
private:
    string name;
    int age;
    int height;

public:
    Animal();
    void input();
    void output(ofstream& fout);
};

#endif