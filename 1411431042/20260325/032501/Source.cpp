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
            cout << "Invalid name length (must be >2 and <5)." << endl;
            petName = "None";
        }
    }

    void setPetAge(int age)
    {
        if (age <= 20)
            petAge = age;
        else
        {
            cout << "Invalid age (must be <=20)." << endl;
            petAge = 0;
        }
    }

    string getPetName() const
    {
        return petName;
    }

    int getPetAge() const
    {
        return petAge;
    }

    void displayMessage() const
    {
        cout << "Pet name: " << getPetName() << endl;
        cout << "Pet age : " << getPetAge() << endl;
    }

private:

    string petName;
    int petAge;

};

int main()
{
    string name;
    int age;

    PET myPet;

    cout << "Please enter pet name:" << endl;
    cin >> name;

    cout << "Please enter pet age:" << endl;
    cin >> age;

    myPet.setPetName(name);
    myPet.setPetAge(age);

    cout << endl;

    myPet.displayMessage();

    return 0;
}