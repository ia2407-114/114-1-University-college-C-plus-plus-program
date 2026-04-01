#include <iostream>
#include "pet.h"
using namespace std;


PET::PET(string name, int age)
{
    petName = name;
    petAge = age;
}


PET::~PET()
{
    cout << "Bye bye my pet !!!" << endl;
}


void PET::setPetName(string name)
{
    if (name.length() <= 5)
        petName = name;
}

void PET::setPetAge(int age)
{
    if (age >= 0 && age <= 15)
        petAge = age;
}


string PET::getPetName() const
{
    return petName;
}

int PET::getPetAge() const
{
    return petAge;
}


void PET::displayMessage() const
{
    cout << "Welcome to see my pet\n" << getPetName() << getPetAge() << "!"
        << endl;
}