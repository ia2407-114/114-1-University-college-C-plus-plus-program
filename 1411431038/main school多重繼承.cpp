#include <iostream>
#include <string>
using namespace std;
#include "school.h"

int main()
{
    classroom class1;  
    class1.student::data_input();
    class1.teacher::data_input();
    class1.show();

    return 0;
}
