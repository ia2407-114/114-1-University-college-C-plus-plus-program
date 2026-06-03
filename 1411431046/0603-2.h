#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>
using namespace std;

class flight_object
{
public:
    string name;
    int id;
    int pilot;
    float kerosene;
    string manufacturer;

    void create_flight_object(string obj);

    virtual void display() = 0;
};

class airliner : public virtual flight_object
{
protected:
    int passenger;
    int service_person;

public:
    void create_airliner();
    void display() override;
};

class battleplane : public virtual flight_object
{
protected:
    string weapon;

public:
    void create_battleplane();
    void display() override;
};

class bombplane : public airliner, public battleplane
{
public:
    void create_bombplane();
    void display() override;
};

#endif