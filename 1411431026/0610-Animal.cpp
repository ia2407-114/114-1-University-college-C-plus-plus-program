#include "0610-Animal.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

Animal::Animal()
{
    name = "";
    age = 0;
    height = 0;
}

void Animal::input()
{
    cout << left
        << setw(12) << "動物名稱"
        << setw(8) << "年齡"
        << setw(8) << "身高"
        << endl;

    cin >> name >> age >> height;
}

void Animal::writeToFile(ofstream& outFile)
{
    outFile << left
        << setw(12) << name
        << setw(8) << age
        << setw(8) << height
        << endl;
}