#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> 
using namespace std;

class Pet
{
public:
    void setPetName(string name, int age)
    {
        if(name.length() > 2 && name.length() < 5 && age < 20)
            petName = name;
            petage = age;
    }

    string getPetName() const
    {
        string confirm;
        cout << "are you owner? press N or Y" << endl;
        cin >> confirm ;
        if (confirm == "Y" || confirm == "y")
            return petName;
    }
    int getPetage() const
    {
            return petage;
    }

    void displayMessage() const
    {
        cout << "Welcome to the pet name note for\n" << getPetName() << "!"
            << endl;
    }
private:
    string petName;
    int petage;
};

int main()
{
    string nameOfpet;
    int petage = 0;
    Pet myPet;


    cout << "pet name is:\n " << myPet.getPetName()
        << "pet age is:" << myPet.getPetage()
        << endl;

    cout << "\nPlease enter the pet name and age:" << endl;
    cin >> nameOfpet >> petage;
    myPet.setPetName(nameOfpet,petage);

    cout << endl;
    myPet.displayMessage();
}

