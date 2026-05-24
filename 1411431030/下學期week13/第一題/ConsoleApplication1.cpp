#include <iostream>
#include <string>
#include "cuboid.cpp"
using namespace std;

int main()
{
    cube cuboid;
    cuboid.rectangle::data_input();
    cuboid.cube::data_input();

    return 0;
}
