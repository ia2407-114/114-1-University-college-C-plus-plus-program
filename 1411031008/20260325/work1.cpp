// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and get its value; 
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class PET
{
public:
    // function that sets the course name
    void setPetName(string name)
    {   if(name.length()> 2 && name.length() < 5)
        petName = name; // store the course name in the object
    } // end function setCourseName

    void setPetAge(int age)
    {   if(age>20)
        petAge = age; // store the course name in the object
    } // end function setCourseName

    // function that gets the course name
    string getPetName() const
    {
        return petName; // return the object's courseName
    } // end function getCourseName

    int getPetAge() const
    {
        return petAge; // return the object's courseName
    } // end function getCourseName

    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "Welcome to see my pet\n" << getPetName() << getPetAge() << "!"
            << endl;
    } // end function displayMessage
private:
    string petName = "leo";
    int petAge = 1;// course name for this GradeBook
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string nameOfPet; // string of characters to store the course name
    PET myPet; // create a GradeBook object named myGradeBook
    int ageOfPet;

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
