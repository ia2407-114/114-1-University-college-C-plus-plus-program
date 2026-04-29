#include <iostream>
#include "PET.h"
#include "Date.h"
using namespace std;

void printDate(const Date&);

PET::PET(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first),
    category(last),
    birthDate(dateOfBirth),
    adoptDate(dateOfHire)
{
    cout << "PET object constructor: " << firstName << ' ' << category << endl;
}

void PET::print() const
{
    cout << category << ", " << firstName << endl;

    cout << "  Adopted: ";
    printDate(adoptDate); 

    cout << "\n  Birthday: ";
    printDate(birthDate); 
    cout << endl;
}

PET::~PET()
{
    cout << "\n PET object destructor: " << category << ", " << firstName << endl;
}
