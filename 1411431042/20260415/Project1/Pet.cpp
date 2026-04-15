//Pet.cpp
#include <iostream>
#include "PET.h" 
#include "Date.h" 
using namespace std;

PET::PET(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    category(last), // initialize category
    birthDate(dateOfBirth), // initialize birthDate
    adoptedDate(dateOfHire) // initialize adopedate
{
    // output PET object to show when constructor is called
    cout << "PET object constructor: "
        << firstName << ' ' << category << endl;
} // end PET constructor

// print PET object
void PET::print() const
{
    cout << category << ", " << firstName << "  Hired: ";
    adoptedDate.printStandard();
    adoptedDate.printUniversal();
    cout << "  Birthday: ";
    birthDate.printStandard();
    birthDate.printUniversal();
    cout << endl;
} // end function print

// output PET object to show when its destructor is called
PET::~PET()
{
    cout << "Bye Bye~~ "
        << category << ", " << firstName << endl;
} // end ~PET destructor


