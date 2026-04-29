#include <iostream>
#include "0429-1pet.h" // PET class definition
#include "0429-1date.h" // Date class definition
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
    cout << "----------------------------------" << endl;
    cout << category << ", " << firstName << endl;
    
    cout << "Birthday: ";
    printDate(birthDate);   

    cout << "Adopted: ";
    printDate(adoptDate);
    cout << "----------------------------------" << endl;
} // end function print

// output PET object to show when its destructor is called
PET::~PET()
{
    print();
    cout << "\n PET object destructor: "
        << category << ", " << firstName << endl;
} // end ~PET destructor