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
            petName = "Invalid Name";
    }

    void setPetAge(int age)
    {
        if (age <= 20)
            petAge = age;
        else
            petAge = 0;
    }

    void displayPetInfo() const
    {
        char isOwner;
        cout << "Are you the owner? (Enter Y for Yes): ";
        cin >> isOwner;

        if (isOwner == 'Y' || isOwner == 'y')
        {
            cout << "Access Granted." << endl;
            cout << "Pet Name: " << petName << endl;
            cout << "Pet Age: " << petAge << endl;
        }
        else
        {
            cout << "Access Denied. Only the owner can view this info." << endl;
        }
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

    cout << "Enter pet name (length 3-4): ";
    cin >> name;
    myPet.setPetName(name);

    cout << "Enter pet age (<= 20): ";
    cin >> age;
    myPet.setPetAge(age);

    cout << endl;
    myPet.displayPetInfo(); 
}