#include "0520-2.h"

student::student(int id, string name)
    : student_id(id), student_name(name)
{
}

string student::getStudentName()
{
    return student_name;
}


teacher::teacher(int id, string name)
    : teacher_id(id),
    teacher_name(name),
    course_id(0),
    course_name(""),
    course_credit(0)
{
}

void teacher::data_input()
{
    cout << "請輸入課程編號：";
    cin >> course_id;

    cin.ignore();

    cout << "請輸入課程名稱：";
    getline(cin, course_name);

    cout << "請輸入課程學分：";
    cin >> course_credit;
}

int teacher::getCourseID()
{
    return course_id;
}

string teacher::getCourseName()
{
    return course_name;
}

int teacher::getCourseCredit()
{
    return course_credit;
}
string teacher::getTeacherName()
{
    return teacher_name;
}


// 建構子
classroom::classroom(int sid, string sname,
    int tid, string tname)
    : student(sid, sname), teacher(tid, tname)
{
}


void classroom::show()
{
    cout << "\n===== 教室資料 =====" << endl;

    cout << "課程編號：" << getCourseID() << endl;
    cout << "課程名稱：" << getCourseName() << endl;
    cout << "課程學分：" << getCourseCredit() << endl;

    cout << "教師姓名：" << getTeacherName() << endl;
    cout << "學生姓名：" << getStudentName() << endl;
}