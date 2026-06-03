#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class flight_object {
public:
    string name, manufacturer;
    int id, pilot;
    float kerosene;
    void create_flight_object(string obj);
};

class airliner : public virtual flight_object {
protected:
    int passenger, service_person;
public:
    void create_airliner();
};

class battleplane : public virtual flight_object {
protected:
    string weapon;
public:
    void create_battleplane();
};

class bombplane : public airliner, public battleplane {
public:
    void create_bombplane();
    void display(ostream& out = cout);
};
#endif