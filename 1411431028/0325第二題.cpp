#include <iostream>
#include <string>
#include <limits> 

using namespace std;

class PET {
public:
   
    PET() {
        petName = "None";
        petAge = 0;
    }

    
    void setPetName(string nameOfPet) {
        if (nameOfPet.length() > 2 && nameOfPet.length() < 5) {
            petName = nameOfPet;
        }
        else {
            petName = "Unknown";
            cout << "Warning: Name length must be 3 or 4. Set to default." << endl;
        }
    }

    
    void setPetAge(int ageOfPet) {
        if (ageOfPet >= 0 && ageOfPet <= 20) {
            petAge = ageOfPet;
        }
        else {
            petAge = 0;
            cout << "Warning: Invalid age (0-20). Set to 0." << endl;
        }
    }

    string getPetName() const { return petName; }
    int getPetAge() const { return petAge; }

    
    void displayMessage() const {
        char isOwner;
        cout << "Are you the owner? (Y/N): ";
        cin >> isOwner;

        if (isOwner == 'Y' || isOwner == 'y') {
            cout << "\n--- Pet Information ---" << endl;
            cout << "Pet Name: " << getPetName() << endl;
            cout << "Pet Age: " << getPetAge() << " years old" << endl;
        }
        else {
            cout << "Access Denied." << endl;
        }
    }

private:
    string petName;
    int petAge;
};

int main() {
    string nameOfPet;
    int ageOfPet;
    PET myPet;

    
    cout << "Initial pet name is: " << myPet.getPetName() << endl;
    cout << "Initial pet age is: " << myPet.getPetAge() << endl;

    cout << "\nPlease enter the pet name:" << endl;
    getline(cin, nameOfPet);
    myPet.setPetName(nameOfPet);

    cout << "\nPlease enter the pet age:" << endl;
    cin >> ageOfPet;
    myPet.setPetAge(ageOfPet);

    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl;
    myPet.displayMessage();

    return 0;
}