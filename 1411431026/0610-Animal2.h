#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <fstream>

using namespace std;

class Animal
{
private:
    string name;
    int age;
    int height;

public:
    Animal();

    void inputData();
    void writeData(ofstream& outFile);

    string getName() const;
    int getAge() const;
    int getHeight() const;
};

#endif