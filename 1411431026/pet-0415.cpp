#include <iostream>
#include "pet-0415.h" // PET class definition
#include "date-0415.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
PET::PET(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    category(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfHire) // initialize adoptDate
{
    // output PET object to show when constructor is called
    cout << "PET object constructor: "
        << firstName << ' ' << category << endl;
} // end PET constructor

void PET::check_birth() const {
    cout << "生日: ";
    birthDate.printUniversal();
    cout << endl;
}

void PET::check_adopt() const {
    cout << "領養日: ";
    adoptDate.printUniversal();
    cout << endl;
}

void PET::print_all_data() const {
    cout << "\n---寵物資料---\n";
    cout << "名字: " << firstName << endl;
    cout << "品種: " << category << endl;

    cout << "生日: ";
    birthDate.printUniversal();
    cout << endl;

    cout << "領養日: ";
    adoptDate.printUniversal();
    cout << endl;
}

PET::~PET() {
    cout << firstName << " Bye Bye~~" << endl;
}