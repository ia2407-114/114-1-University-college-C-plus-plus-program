#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string name;
    int id;

    void data_input() {
        cout << "輸入學生編號:" << endl;
        cin >> id;
        cout << "輸入學生名稱:" << endl;
        cin >> name;
    }
};

class teacher
{
protected:
    string name;
    int id;
    int course_id;
    string course_name;
    int course_credit;

    void data_input() {
        cout << "輸入教師編號:" << endl;
        cin >> id;
        cout << "輸入教師名稱:" << endl;
        cin >> name;
        cout << "輸入課程編號:" << endl;
        cin >> course_id;
        cout << "輸入課程名稱:" << endl;
        cin >> course_name;
        cout << "輸入課程學分:" << endl;
        cin >> course_credit;
    }
};

class classroom :public student, public teacher {
public:
    void show() {
        student::data_input();
        teacher::data_input();
        cout << "\n課程編號:\n" << course_id << endl;
        cout << "課程名稱:\n" << course_name << endl;
        cout << "課程學分:\n" << course_credit << endl;
        cout << "學生名稱:\n" << student::id << endl;
        cout << "學生編號:\n" << student::name << endl;
        cout << "老師名稱:\n" << teacher::id << endl;
        cout << "老師編號:\n" << teacher::name << endl;
    }
};