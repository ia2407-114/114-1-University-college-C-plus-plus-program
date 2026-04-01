#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class PET
{
public:
    PET(string name, int tempAge);

    ~PET();
 
    void setPetName(string name);

    void setPetAge(int age);

    
    string getPetName() const;

    int getPetAge() const;

    
    void displayMessage() const;
private:
    string petName ;
    int petAge;
}; 
