#include <iostream>
#include <string> 
#include"pet.h"
using namespace std;



int main()
{
    string nameOfpet;
    int ageOfpet;
    PET petdog("kevin", 2);


    petdog.displayMessage();
}