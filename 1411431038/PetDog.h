#ifndef PETDOG_H  
#define PETDOG_H  

#include <string> 
using namespace std; 

class PetDog {
private: 
    string name;                         
    int birthYear, birthMonth, birthDay; 
    int adoptYear, adoptMonth, adoptDay; 

public: 
    PetDog(string n, int by, int bm, int bd, int ay, int am, int ad);
    bool validateDates(); 
    void displayInfo();  
};

#endif
