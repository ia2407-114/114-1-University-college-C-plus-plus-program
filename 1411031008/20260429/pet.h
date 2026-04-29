// PET class definition showing composition.
// Member functions defined in PET.cpp.
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class PET
{
    friend void printDate(PET);
public:
    PET(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~PET(); // provided to confirm destruction order
private:
    std::string firstName; // composition: member object
    std::string category; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class PET#pragma once
#endif#pragma once
