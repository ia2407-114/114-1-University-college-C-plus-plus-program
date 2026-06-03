#include "file_processing.h"
#include <iostream>

using namespace std;

int main() {
    bombplane bomb1;

    bomb1.create_flight_object("ÅF¬µ¾÷");
    bomb1.create_bombplane();

    bomb1.display();

    bomb1.save_to_file("bomb.txt");

    return 0;
}