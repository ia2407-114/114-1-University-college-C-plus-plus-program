#include"petbook.h"
#include <iostream>
#include <string> 
using namespace std;

    Pet::Pet(string petname, int tempage) {
        petName = petname;
        petage = tempage;
    }
    Pet::~Pet() {
        cout << "goodbye my pet" << endl;
    }
    void Pet::setPetName(string name, int age)
    {
        if (name.length() > 2 && name.length() < 5 && age < 20)
            petName = name;
        petage = age;
    }

    string Pet::getPetName() const
    {
        string confirm;
        cout << "are you owner? press N or Y" << endl;
        cin >> confirm;
        if (confirm == "Y" || confirm == "y")
            return petName;
        return "";
    }
    int Pet::getPetage() const
    {
        return petage;
    }

    void Pet::displayMessage() const
    {
        cout << "Welcome to the pet name note for\n" << getPetName() << "!"
            << endl;
    }
