#include "0610.h"
#include <iomanip>

void writeAnimal(ofstream& writefile,
    string name,
    int age,
    int height)
{
    writefile << left
        << setw(15) << name      
        << setw(10) << age      
        << setw(10) << height   
        << endl;
}