#include <iostream>
#include <string>
using namespace std;

class PET
{
public:

    PET()
    {
        petName = "Coco";
        petAge = 16;
    }

    void display() const
    {
        cout << "Pet name: " << petName << endl;
        cout << "Pet age : " << petAge << endl;
    }

    ~PET()
    {
        cout << "Goodbye, " << petName << "!" << endl;
    }

private:
    string petName;
    int petAge;
};

int main()
{
    PET myPet;

    myPet.display();

    return 0;
}