#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    bombplane bomb1;
    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();
    bomb1.display();
    bomb1.write();

    return 0;
}