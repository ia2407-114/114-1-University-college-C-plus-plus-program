#include <iostream>
#include <string>
using namespace std;

class PET
{
public:

    void setPetName(string name)
    {
        if (name.length() > 2 && name.length() < 5)
            petName = name;
        else
        {
            cout << "Invalid name length." << endl;
            petName = "None";
        }
    }

    void setPetAge(int age)
    {
        if (age <= 20)
            petAge = age;
        else
        {
            cout << "Invalid age." << endl;
            petAge = 0;
        }
    }

    void getPetInfo() const
    {
        char choice;
        cout << "Are you the owner? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y')
        {
            cout << "Pet name: " << petName << endl;
            cout << "Pet age : " << petAge << endl;
        }
        else
        {
            cout << "Access denied." << endl;
        }
    }

private:
    string petName;
    int petAge;
};

int main()
{
    PET myPet;
    string name;
    int age;

    cout << "Enter pet name: ";
    cin >> name;

    cout << "Enter pet age: ";
    cin >> age;

    myPet.setPetName(name);
    myPet.setPetAge(age);

    cout << endl;

    myPet.getPetInfo();

    return 0;
}