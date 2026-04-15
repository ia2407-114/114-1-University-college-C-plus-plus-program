#include <iostream>
#include "pet.h" 
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
PET::PET(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : firstName(first), 
    category(last), 
    birthDate(dateOfBirth), 
    adoptDate(dateOfadopt) 
{
    
    cout << "\nPET object constructor: "
         << firstName << ' ' << category << endl;
} // end PET constructor

// output PET object to show when its destructor is called
PET::~PET()
{
    cout << "\nPET object destructor: "
         << category << " " << firstName << endl;
} // end ~PET destructor

void PET::check_birth() {
    int age = 2026 - birthDate.getYear(); // 以 2026 為基準檢查 
    if (age < 0 || age > 20) {
        cout << "警告：[" << firstName << "] 的生日不合理 (年齡 " << age << " 歲)。" << endl;
    }
}

void PET::check_adopt() {
    // 領養日不可早於生日
    if (adoptDate.getYear() < birthDate.getYear()) {
        cout << "警告：[" << firstName << "] 的領養日早於出生日！" << endl;
    }
}

// print PET object
void PET::print() const
{
    cout << "\n Category:" << category << " ,Name: " << firstName << "\n Adoptded: ";
    adoptDate.printStandard();
    adoptDate.printUniversal();
    cout << "\n Birthday: ";
    birthDate.printStandard();
    birthDate.printUniversal();
    cout << endl;
} // end function print