#include <iostream>
#include <string> 
#include"pet.h"
using namespace std;



PET::PET(string name, int age) {
    petName = name;
    petAge = age;
}

PET::~PET() {
    cout << "bye bye my pet" << endl;
}


void PET::setpetName(string name) {
    if (name.length() > 2 && name.length() < 5)
        petName = name;
    else
        cout << "[Error] Name length must be greater than 2 and less than 5! Please re-enter." << endl;
}


void PET::setpetAge(int age) {
    if (age > 0)
        petAge = age;
    else
        cout << "[Error] Age must be big than 0 ! Please re-enter." << endl;
}


string PET::getpetName() const {
    return petName;
}


int PET::getpetAge() const {
    return petAge;
}


void PET::displayMessage() const {
    cout << "Pet Name: " << getpetName() << " | Pet Age: " << getpetAge() << "!" << endl;
}