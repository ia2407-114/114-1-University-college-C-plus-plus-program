#include "0610-Animal2.h"
#include <iostream>
#include <iomanip>

using namespace std;

Animal::Animal()
{
    name = "";
    age = 0;
    height = 0;
}

void Animal::inputData()
{
    cin >> name >> age >> height;
}

void Animal::writeData(ofstream& outFile)
{
    outFile << left
        << setw(15) << name
        << setw(10) << age
        << setw(10) << height
        << endl;
}

string Animal::getName() const
{
    return name;
}

int Animal::getAge() const
{
    return age;
}

int Animal::getHeight() const
{
    return height;
}