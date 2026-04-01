#include <iostream> 
#include <string> // class GradeBook uses C++ standard string class
using namespace std;
// GradeBook class definition
class PET
{
public:
    // constructor initializes courseName with string supplied as argument
    PET(string name, int tempAge) {
        petName = name;
        petAge = tempAge;
    }
    
    ~PET()
    {
        cout << "Bye Bye me pet!!!" << endl;
    }

    // function to set the course name
    void setPetName(string name)
    {
        if (name.length() <= 5)
            petName = name;
    } // end function setCourseName

    void setPetAge(int age)
    {
        if (age>=0 && age<=15)
            petAge = age;
    }
   
    string getPetName()const
    {
        return petName;
    }

    int getPetAge()const
    {
        return petAge;
    }

    void displayMessage() const
    {
        cout << "Welcome to see my pet\n" << getPetName() << ",and his age is "<<getPetAge()<< " year old!" << endl;
    } 
private:
    string petName;
    int petAge = 1;
}; 

int main()
{
    string nameOfPet;
    PET myParrot("Boo", 5), myDOG("Dobby", 3);
    int ageOfPet;

    cout << endl;
    myParrot.displayMessage();
    myDOG.displayMessage();
}
