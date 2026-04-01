#include <iostream> 
#include <string>
using namespace std;

class PET
{
public:
    PET(string name, int tempAge);
    ~PET();
    void setPetName(string name);
    void setPetAge(int age);
    string getPetName()const;
    int getPetAge()const;
    void displayMessage() const;
private:
    string petName;
    int petAge = 1;
};
