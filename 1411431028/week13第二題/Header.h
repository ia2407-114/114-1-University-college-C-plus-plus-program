using namespace std;



class student
{
protected:
    string id;
    string name;

public:

    student()
    {
        cout << "--- 輸入學生資料 ---" << endl;
        cout << "請輸入學生學號: ";
        cin >> id;
        cout << "請輸入學生姓名: ";
        cin >> name;
    }
};


class teacher
{
protected:
    string id;
    string name;
    string course_id;
    string course_name;
    int course_credit;

public:

    teacher()
    {
        cout << "--- 輸入教師資料 ---" << endl;
        cout << "請輸入教師編號: ";
        cin >> id;
        cout << "請輸入教師姓名: ";
        cin >> name;
    }


    void data_input()
    {
        cout << "--- 輸入課程資料 ---" << endl;
        cout << "請輸入課程編號: ";
        cin >> course_id;
        cout << "請輸入課程名稱: ";
        cin >> course_name;
        cout << "請輸入學分數: ";
        cin >> course_credit;
    }
};


class classroom : public teacher, public student
{
public:

    void show()
    {
        cout << "\n===============================" << endl;
        cout << "         課 堂 資 訊" << endl;
        cout << "===============================" << endl;
        cout << "課程編號: " << course_id << endl;
        cout << "課程名稱: " << course_name << endl;
        cout << "學 分 數: " << course_credit << endl;
        cout << "-------------------------------" << endl;


        cout << "任課教師: " << teacher::name << " (編號: " << teacher::id << ")" << endl;
        cout << "選課學生: " << student::name << " (學號: " << student::id << ")" << endl;
        cout << "===============================" << endl;
    }
};
#pragma once
