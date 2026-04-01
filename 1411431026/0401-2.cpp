#include <iostream> 
#include <string>
#include "0401pet.h"// class GradeBook uses C++ standard string class
using namespace std;


int main()
{
    string nameOfPet;
    PET myParrot("Boo", 5), myDOG("Dobby", 3);
    int ageOfPet;

    cout << endl;
    myParrot.displayMessage();
    myDOG.displayMessage();
}
