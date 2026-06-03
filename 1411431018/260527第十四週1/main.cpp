#include <iostream>
#include "shape.h"
using namespace std;


int main() {
    Shape* a1;
    Cone c(5,3);
    Ball b(4);
    Cylinder cy(3, 5);
    a1 = &c;
    cout <<"Cone: " << a1->Volume() << endl;
    a1 = &b;
    cout <<"Ball: " << a1->Volume() << endl;
    a1 = &cy;
    cout <<"Cylinder: " << a1->Volume() << endl;
    return 0;
}
//題目1: 請根據第二個程式碼，基於"純虛擬函數"與"抽象類別"建立一個"Shape"類別與"體積"純虛擬函數Volume，
// 並據此建立一個"物件指標"a1，透過這個指標a1，
// 依序指向Shape的衍生類別"圓錐體體積"、"球體體積"、"圓柱體體積"所建立的物件，分別印出他們的體積。