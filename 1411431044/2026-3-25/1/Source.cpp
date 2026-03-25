#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
    void setPetName(string name)
    {
        if (name.length() > 2 && name.length() < 5)
            petName = name;
        else
            petName = "Invalid";
    }

    void setPetAge(int age)
    {
        if (age <= 20)
            petAge = age;
        else
            petAge = 0;
    }

    string getPetName() const
    {
        return petName;
    }

    int getPetAge() const
    {
        return petAge;
    }

    void displayPetInfo() const
    {
        cout << "Pet Name: " << getPetName() << endl;
        cout << "Pet Age: " << getPetAge() << endl;
    }

private:
    string petName;
    int petAge;
};

int main()
{
    Pet myPet;
    string name;
    int age;

    cout << "Enter pet name: ";
    cin >> name;
    myPet.setPetName(name);

    cout << "Enter pet age: ";
    cin >> age;
    myPet.setPetAge(age);

    cout << endl;
    myPet.displayPetInfo();
}