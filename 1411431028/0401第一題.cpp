#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> 
using namespace std;

class Pet
{
public:
    Pet(string Petname, int Petage) {
        petName = Petname;
        petage = Petage;
    }
    ~Pet() {
        cout << "goodbye my pet" << endl;
    }
    void setPetName(string name, int age)
    {
        if (name.length() > 2 && name.length() < 5 && age < 20)
            petName = name;
        petage = age;
    }

    string getPetName() const
    {
        string confirm;
        cout << "are you owner? press N or Y" << endl;
        cin >> confirm;
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
    Pet myPetcat("curry", 3), myPetdog("kobe", 15);


   
    cout << endl;
    myPetcat.displayMessage();
    myPetdog.displayMessage();
}
