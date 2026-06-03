#include <iostream>
#include <fstream>
#include <string>
#include "FlightObject.h"

int main() {
    bombplane bomb1;

    
    bomb1.create_flight_object("ÅF¬µ¾÷");
    bomb1.create_bombplane();

    bomb1.display(cout);

    ofstream outFile("bomb.txt");
    if (outFile.is_open()) {
        bomb1.display(outFile);
        outFile.close();
    }

    return 0;
}