#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" 

class PET
{
public:
    PET(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~PET(); 
private:
    std::string firstName; 
    std::string category; 
    const Date birthDate;
    const Date adoptDate; 
}; 
#endif