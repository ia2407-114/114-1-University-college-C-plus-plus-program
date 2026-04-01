#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string> 
#include"petbook.h"
using namespace std;

int main()
{
    string nameOfpet;
    int petage = 0;
    Pet myDog("lucky", 2), myCat("kitty", 3);


    /*cout << "pet name is:\n " << myPet.getPetName()
        << "pet age is:" << myPet.getPetage()
        << endl;

    cout << "\nPlease enter the pet name and age:" << endl;
    cin >> nameOfpet >> petage;
    myPet.setPetName(nameOfpet, petage);*/

    cout << endl;
    myDog.displayMessage();
    myCat.displayMessage();
}