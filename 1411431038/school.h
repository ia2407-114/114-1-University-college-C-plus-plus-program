#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>

// 1. 學生類別宣告
class student {
protected:
    std::string name;
    int id;

public:
    void data_input();
};

// 2. 教師類別宣告
class teacher {
protected:
    int id;
    std::string name;
    int course_id;
    std::string course_name;
    int course_credit;

public:
    teacher();
    void data_input();
};

// 3. 教室類別宣告 (多重繼承)
class classroom : public student, public teacher {
public:
    void show();
};

#endif
