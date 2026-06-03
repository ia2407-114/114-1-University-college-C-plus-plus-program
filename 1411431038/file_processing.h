#ifndef FILE_PROCESSING_H
#define FILE_PROCESSING_H

#include <string>


class flight_object {
public:
    std::string name;
    int id;
    int pilot;
    float kerosene;
    std::string manufacturer;

    void create_flight_object(std::string obj);
};


class airliner : public virtual flight_object {
protected:
    int passenger;
    int service_person;

public:
    void create_airliner();
    void display();
};


class battleplane : public virtual flight_object {
protected:
    std::string weapon;

public:
    void create_battleplane();
    void display();
};

class bombplane : public airliner, public battleplane {
public:
    void create_bombplane();
    void display();
    void save_to_file(std::string filename);
};

#endif