#ifndef PETBOOK_H
#define PETBOOK_H

#include<iostream>
#include <string> 
using namespace std;

class Pet
{
public:
    Pet(string petname, int tempage);
    ~Pet();
    void setPetName(string name, int age);
    string getPetName() const;
    int getPetage() const;
    void displayMessage() const;
private:
    string petName;
    int petage;
};

#endif
