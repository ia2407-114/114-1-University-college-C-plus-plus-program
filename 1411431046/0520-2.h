#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int student_id;      
    string student_name; 

public:
    // 建構子
    student(int id, string name);

    string getStudentName();
};

class teacher
{
protected:
    int teacher_id;        
    string teacher_name;  

    int course_id;         
    string course_name;   
    int course_credit;     

public:
    
    teacher(int id, string name);

    
    void data_input();

    
    int getCourseID();
    string getCourseName();
    int getCourseCredit();

    string getTeacherName();
};

class classroom : public teacher, public student
{
public:
    // 建構子
    classroom(int sid, string sname,
        int tid, string tname);

    void show();
};

#endif
