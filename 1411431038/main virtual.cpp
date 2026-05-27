#include <iostream>
#include "virtual.h" // 只需引入介面標頭檔
using namespace std;

int main() {
    Shap* a1 = nullptr;

    // 指向圓錐體
    a1 = new Cone(3, 5);
    cout << "圓錐體體積: " << a1->Volume() << endl;
    delete a1;

    // 指向球體
    a1 = new Sphere(3);
    cout << "球體體積:   " << a1->Volume() << endl;
    delete a1;

    // 指向圓柱體
    a1 = new Cylinder(3, 5);
    cout << "圓柱體體積: " << a1->Volume() << endl;
    delete a1;

    return 0;
}