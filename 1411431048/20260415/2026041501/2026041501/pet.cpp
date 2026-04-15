#include <iostream>
#include "pet.h" // pet class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
pet::pet(const string& first, const string& category,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    category(category), // initialize category
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfHire) // initialize adoptDate
{
    // output pet object to show when constructor is called
    cout << "pet object constructor: "
        << firstName << ' ' << category << endl;
} // end pet constructor

// print pet object
void pet::print() const
{
    cout << category << ", " << firstName << "  category: ";
    adoptDate.printUniversal();
    adoptDate.printStandard();
    cout << "  Birthday: ";
    birthDate.printUniversal();
    birthDate.printStandard();
    cout << endl;
} // end function print

// output pet object to show when its destructor is called
pet::~pet()
{
    cout << "pet object destructor: "
        << category << ", " << firstName <<"\nbye bye"<< endl;
    
} 
// end ~pet destructor