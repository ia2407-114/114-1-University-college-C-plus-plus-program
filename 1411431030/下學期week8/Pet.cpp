// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.
#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : Name(first), // initialize firstName
    category(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfHire) // initialize hireDate
{
    // output Pet object to show when constructor is called
    cout << "Pet object constructor: "
        << Name << ' ' << category << endl;
} // end Pet constructor

// print Pet object
void Pet::print() const
{
    cout << category << ", " << Name << "  Adopted: ";
    adoptDate.printUniversal();
    adoptDate.printStandard();
    cout << "  Birthday: ";
    birthDate.printUniversal();
    birthDate.printStandard();
    cout << endl;
} // end function print

// output Pet object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << category << ", " << Name << "¡@goodbye" << endl;
} // end ~Pet destructor
