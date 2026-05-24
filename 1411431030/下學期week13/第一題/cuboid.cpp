#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
class shape
{
protected:
    string name;  // 飛行物名稱 
    float shape_area;
    // flight_object類別建構元函式,設定飛行物的資料

    // 顯示飛行物的資料
    void area()
    {
        cout << name << "面積:" << shape_area;
    }
};

// 大型客機類別
class rectangle :public shape
{
protected:
    int length;  // 乘客人數   
    int width;  // 服務人員的數目 

public:
    // 顯示大型客機的資料
    void data_input()
    {
        cout << "輸入長方體的長" << endl;
        cin >> length;
        cout << "輸入長方體的寬" << endl;
        cin >> width;
    }
};

// 空中巴士客機類別
class cube :public rectangle
{
protected:
    int height;   // 沐浴設備數目     

public:
    // 顯示空中巴士客機的資料
    void data_input()
    {
        cout << "輸入長方體的高:" << endl;
        cin >> height;
        shape_area = length * width * height;
        area();
    }
};
