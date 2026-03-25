#include <iostream>
#include <string> 
using namespace std;

class PET
{
public:
    void setpetName(string name)
    {
        if (name.length() > 2 && name.length() < 5)
            petName = name;
        else
            cout << "[Error] Name length must be greater than 2 and less than 5! Please re-enter." << endl;
    }
    void setpetAge(int age)
    {
        if (age > 0)
            petAge = age;
        else
            cout << "[Error] Age must be big than 0 ! Please re-enter." << endl;
    }

    string getpetName() const
    {
        return petName;
    }

    int getpetAge() const
    {
        return petAge;
    }

    void displayMessage() const
    {
        cout << "Pet Name: " << getpetName() << " | Pet Age: " << getpetAge() << "!" << endl;
    }
private:
    string petName = "jun";
    int petAge = 1;
};

int main()
{
    string nameOfpet;
    int ageOfpet;
    PET mypet;
    char isOwner;

    cout << "\nPlease enter the pet name:" << endl;
    getline(cin, nameOfpet);
    mypet.setpetName(nameOfpet);

    cout << "\nPlease enter the pet Age:" << endl;
    cin >> ageOfpet;
    mypet.setpetAge(ageOfpet);

    cout << "Are you a pet owner?" << endl;
    cin>> isOwner;
    if (isOwner == 'Y' || isOwner == 'y')
        mypet.displayMessage();
    else
        cout << "Sorry, only the owner can view the pet's information." << endl;
}