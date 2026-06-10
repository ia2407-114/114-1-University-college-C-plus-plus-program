#ifndef ANIMAL_H
#define ANIMAL_H

#include <fstream>
#include <string>
using namespace std;

void writeAnimal(ofstream& writefile,
    string name,
    int age,
    int height);

#endif