#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
class shape
{
protected:
    string name;  // 飛行物名稱 
    int shape_area;       // 飛行物公升號 

public:
    void area(){
        cout << name << "體積是" << shape_area << endl;

    }
};

        // 大型客機類別

class rectangle :public shape
    {
    protected:
        int length;  // 乘客人數   
        int width;  // 服務人員的數目 

    public:
        void data_input() {
            name = "長方體";
            cout << "輸入長";
            cin >> length;
            cout << "輸入寬";
            cin >> width;
        };

    };
class cube :public rectangle
    {
    protected:
        int height;


    public:
        void data_input() {
            rectangle::data_input();

            cout << "輸入高";
            cin >> height;
            shape_area = length * width * height;
        };

    };
    // 空中巴士客機類別


    int main()
    {
        cube my_cube;

        my_cube.data_input();

        my_cube.area;

        return 0;
    }
