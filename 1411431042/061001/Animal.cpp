#include "Animal.h"

Animal::Animal()
{
    name = "";
    age = 0;
    height = 0;
}

void Animal::input()
{
    cout << "動物名稱：";
    cin >> name;

    cout << "年齡：";
    cin >> age;

    cout << "身高：";
    cin >> height;
}

void Animal::output(ofstream& fout)
{
    fout << left
        << setw(15) << name
        << setw(10) << age
        << setw(10) << height
        << endl;
}