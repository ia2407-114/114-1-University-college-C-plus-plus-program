// Fig. 9.20: PET.cpp
// PET class member-function definitions.
#include <iostream>
#include "PET.h" // PET class definition
#include "Date.h" // Date class definition
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

// print PET object
void PET::print() const
{
    cout << category << ", " << firstName << "  Adopted: ";
    adoptDate.printUniversal();
    adoptDate.printStandard();
    cout << "  Birthday: ";
    birthDate.printUniversal();
    birthDate.printStandard();
    cout << endl;
} // end function print

// output PET object to show when its destructor is called
PET::~PET()
{      
    print();
    cout << "PET object destructor: "
        << category << ", " << firstName << endl;
} // end ~PET destructor
