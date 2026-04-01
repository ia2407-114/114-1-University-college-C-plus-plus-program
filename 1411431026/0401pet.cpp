#include "0401pet.h"

    PET::PET(string name, int tempAge) {
        petName = name;
        petAge = tempAge;
    }

    PET::~PET()
    {
        cout << "Bye Bye me pet!!!" << endl;
    }

    void PET::setPetName(string name)
    {
        if (name.length() <= 5)
            petName = name;
    }

   void  PET::setPetAge(int age)
    {
        if (age >= 0 && age <= 15)
            petAge = age;
    }

    string PET::getPetName()const
    {
        return petName;
    }

    int PET::getPetAge()const
    {
        return petAge;
    }

    void PET::displayMessage() const
    {
        cout << "Welcome to see my pet\n" << getPetName() << ",and his age is " << getPetAge() << " year old!" << endl;
    }
