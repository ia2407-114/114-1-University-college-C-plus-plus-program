#include <iostream>
#include <string> 
using namespace std;


#include <iostream>
#include <string>

class PET
{
public:

    PET(std::string name, int age);
    ~PET();


    void setpetName(std::string name);
    void setpetAge(int age);

    std::string getpetName() const;
    int getpetAge() const;

    void displayMessage() const;

private:
    std::string petName;
    int petAge;
};