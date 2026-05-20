#include <iostream>
#include <string>
using namespace std;

class shape
{
protected:
    string name;
    float shape_area;

public:

    void area()
    {
        cout << name << "的面積為: " << shape_area << endl;
    }
};


class rectangle : public shape
{
protected:
    float length;
    float width;

public:

    void data_input()
    {
        name = "長方形";
        cout << "輸入長方形長: ";
        cin >> length;
        cout << "輸入長方形寬: ";
        cin >> width;


        shape_area = length * width;
    }
};

// . 衍生類別
class cube : public rectangle
{
private:
    float height;
    float volume;

public:

    void data_input()
    {

        rectangle::data_input();

        name = "長方體";
        cout << "輸入長方體高: ";
        cin >> height;


        volume = length * width * height;
    }


    void display_volume()
    {

        cout << name << "體積為: " << volume << endl;
    }
};
