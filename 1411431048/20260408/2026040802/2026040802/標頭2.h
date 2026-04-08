#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class DogBase {
protected:
    string name;
    int by, bm, bd;
    int ay, am, ad;

public:
    DogBase(string n, int by, int bm, int bd,
        int ay, int am, int ad);

    virtual void show() = 0;

protected:
    bool checkDate(int y, int m, int d);
    bool checkAge(int by, int bm, int bd);
};

class Dog : public DogBase {
public:
    Dog(string n, int by, int bm, int bd,
        int ay, int am, int ad);

    void show();
};

#endif
