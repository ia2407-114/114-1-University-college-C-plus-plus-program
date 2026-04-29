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
//  printDate (Friend Function)
void printDate(const PET& p)
{
    cout << "\n[Friend Function Output]" << endl;
    cout << "Pet: " << p.firstName << " (" << p.category << ")" << endl;

    cout << "  Birthday: ";
    p.birthDate.printStandard(); //  birthDate

    cout << "\n  Adopted: ";
    p.adoptDate.printStandard(); //  adoptDate
    cout << endl;
}
// print PET object
void PET::print() const
{
    cout << category << ", " << firstName << "  Adopted: ";
    adoptDate.printStandard();
    adoptDate.printUniversal();
    cout << "  Birthday: ";
    birthDate.printStandard();
    birthDate.printUniversal();
    cout << endl;
} // end function print

// output PET object to show when its destructor is called
PET::~PET()
{
    print();
    cout << "\n PET object destructor: "
        << category << ", " << firstName << endl;
} // end ~PET destructor