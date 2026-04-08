#include <iostream>
#include "¼ÐÀY2.h"
using namespace std;

int main() {
    string name;
    int by, bm, bd, ay, am, ad;

    cin >> name;
    cin >> by >> bm >> bd;
    cin >> ay >> am >> ad;

    Dog d(name, by, bm, bd, ay, am, ad);
    d.show();

    return 0;
}