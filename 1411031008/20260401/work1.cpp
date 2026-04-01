#include <iostream>
#include <string> 
#include "pet.h"
using namespace std;


int main()
{
    string nameOfPet; // string of characters to store the course name
    //PET myPet; // create a GradeBook object named myGradeBook
    int ageOfPet=1;

    PET myPet(nameOfPet, ageOfPet);
    // display initial value of courseName
    cout << "Initial pet name is: " << myPet.getPetName() << endl;
    cout << "Initial pet age is: " << myPet.getPetAge() << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the pet name:" << endl;
    getline(cin, nameOfPet); // read a course name with blanks
    myPet.setPetName(nameOfPet); // set the course name

    cout << "\nPlease enter the pet age:" << endl;
    cin >> ageOfPet; // read a course name with blanks
    myPet.setPetAge(ageOfPet); // set the course name

    cout << endl; // outputs a blank line
    myPet.displayMessage(); // display message with new course name
} // end main